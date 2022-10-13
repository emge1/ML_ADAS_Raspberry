#include<iostream>
#include <fstream>
#include <sstream>

#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>


int main(int argc, char** argv)
{
    const cv::String keys = 
        "{help h usage ? |      | print this message. }"
        "{c conf         |   .5 | Confidence threshold. }"
        "{n nms          |   .5 | Non-max suppression threshold. }"
        "{@input         |<none>| Input image or movie file. }";
    cv::CommandLineParser parser(argc, argv, keys);
    parser.about("ADAS with C++ & SSD MobileNet");
    if(parser.has("help") || argc == 1)
    {
        parser.printMessage();
        return 0;
    }
    float conf_threshold = parser.get<float>("c");
    float nms_threshold = parser.get<float>("n");

    // Check if the input file has been specified properly.
    std::string file = parser.get<std::string>("@input");
    if(file == "")
    {
        std::cout << "Input file is not specified.\n";
        parser.printMessage();
        return 0;
    }
    if(!cv::utils::fs::exists(file))
    {
        std::cout << "Input file (" << file << ") not found.\n" ;
        return 0;
    }

    const std::string window_name= "Object Detection";
    cv::namedWindow(window_name, cv::WINDOW_NORMAL);


    while(cv::waitKey(duration) < 0)
    {
        Mat frame;
        if (!cap.read(frame))
        {
            std::cout<<"Cannot read the video file. \n";
            break;
        }
        imshow("window_name", frame);
    }
    cv::waitKey(0);
    return 0;
}