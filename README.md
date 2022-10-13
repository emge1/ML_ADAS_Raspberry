# Overview
The project is my Master's Thesis, with my later extensions.

The aim of my thesis was to create an Advanced Driver Assistance System with camera to detect some traffic 
signs, notifying a driver about the object occurrence and verification of the system.

The system detects traffic signs not in real time, but on images or videos to protect environment.

The thesis includes two stages:
* training Convolutional Neural Network, on Google Colab,
* writing code Raspberry Pi 3B and with a watchdog timer as a safety system.

In the /colab dir you can see the code used to training the CNN and the .tflite model. 

In the /raspberry dir, there are codes to detect traffic signs on videos (in Python and C++) and audios used 
for notifications.

# Training
## Datasets
There were 3 datasets, differing in size - XS, XM and XL. 

These neural networks use dataset which includes up to 7770 images belonging to 4 classes (traffic signs) in the training 
dataset and up to 2490 images in the validation dataset.

The ratio of test to validation datasets was 4:1 in each case:
![Datasets used to train and validation of neural networks](/media/datasets.png)

Here are examples from each traffic sign with its markings:
![Examples for each traffic sign](/media/traffic_signs.png)

## Accuracy and loss values
After training stage, for XM:

![Accuracy](/media/xm_accuracy.png)

![Loss](/media/xm_loss.png)

After validation stage, the accuracy and loss of the model was equal to 0.9074 and 0.2604.

# Raspberry Pi code

This part included setting up the Raspberry Pi environment (installing Raspberry Pi OS), writing code to detect objects 
on images or videos and configuring the watchdog timer for the system.

In my thesis, I used the Python version of code.

The C++ version is later. It will also include lightning a LED, depending on the detected sign.



# Further plans

* code for Raspberry Pi in C++ (in progress),
* my implementation of MobileNet (or another Convolutional Neural Network).

# Dependencies:
* Tensorflow
* Tensorflow Hub
* Numpy
* Ski-learn
* OpenCV
* Matplotlib
* Pandas
* Pydub

# Sources
* [dataset GTSRB](https://www.kaggle.com/datasets/meowmeowmeowmeowmeow/gtsrb-german-traffic-sign) - CC0 licence
* [headless model MobileNet V2](https://tfhub.dev/google/imagenet/mobilenet_v2_100_224/feature_vector/4) - Apache 2.0 
licence
