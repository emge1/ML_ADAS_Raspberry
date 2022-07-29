# Overview
The project is my Master's Thesis.

The aim of my Master's thesis is to create an Advanced Driver Assistance System with camera to detect some traffic signs, 
notify a driver about the object occurrence and verify the system.

It includes two stages:
* training Convolutional Neural Network, on Google Colab,
* programming Raspberry Pi 3B

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
* [headless model MobileNet V1](https://tfhub.dev/google/imagenet/mobilenet_v1_100_224/feature_vector/4) - license Apache 2.0
