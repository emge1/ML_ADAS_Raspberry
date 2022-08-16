# Overview
The project is my Master's Thesis.

The aim of my Master's thesis is to create an Advanced Driver Assistance System with camera to detect some traffic signs, 
notify a driver about the object occurrence and verify the system.

It includes two stages:
* training Convolutional Neural Network, on Google Colab,
* programming Raspberry Pi 3B

In the /colab dir you can see the code used to training the CNN and the .tflite model. 

# Training
## Dataset
This project uses dataset which includes 7770 images belonging to 8 classes (traffic signs) in the training dataset and 
2490 images in the validation dataset.

Here are examples from each traffic sign (after grayscale, equalisation and normalisation):
![Examples for each traffic sign](/media/traffic_signs.png)

## Accuracy and loss values
After training stage:

![Accuracy](/media/accuracy.png)

![Loss](/media/loss.png)

After validation stage the accuracy of the model was equal to 0.8125.

# Libraries and frameworks:
* Tensorflow == 2.9.1
* Tensorflow Hub == 0.12.0
* Numpy == 1.22.4
* Ski-learn == 0.0.13
* OpenCV == 4.5.5.64
* Matplotlib == 3.5.2
* Pandas == 1.4.2

# Sources
* [dataset GTSRB](https://www.kaggle.com/datasets/meowmeowmeowmeowmeow/gtsrb-german-traffic-sign) - license CC0
* [headless model MobileNet V2](https://tfhub.dev/google/imagenet/mobilenet_v2_100_224/feature_vector/4) - license Apache 2.0
