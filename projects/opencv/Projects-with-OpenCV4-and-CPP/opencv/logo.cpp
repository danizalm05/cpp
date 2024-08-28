/*- OpenCV3 Computer Vision Application Programming Cookbook
 Copyright (C) 2016 Robert Laganiere, www.laganiere.name

 logo image is insreted in the lower right side of the big inmage
\*------------------------------------------------------------------------------------------*/

#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main() {
	// read an image
	std::string user_name = "rockman"; //"gilfm"; "rockman";
	std::string image_name01 = "puppy.bmp";
	std::string path01 = "C:/Users/" + user_name + "/Pictures/opencv/" + image_name01;

	std::string image_name02 = "smalllogo.png";
	std::string path02 = "C:/Users/" + user_name + "/Pictures/opencv/" + image_name02;

	// define an image window
	cv::namedWindow("Image"); 
	cv::namedWindow("mask");
	// read the image 
	cv::Mat image=  cv::imread(path01);

	// read the logo
	cv::Mat logo=  cv::imread(path02);

	// define image ROI at image bottom-right
	cv::Mat imageROI(image, 
		          cv::Rect(image.cols-logo.cols, //ROI coordinates
                           image.rows-logo.rows,
		                   logo.cols,logo.rows));// ROI size

	// insert logo
	logo.copyTo(imageROI);

	cv::imshow("Image01", image); // show the image
	//cv::waitKey(0); // wait for a key pressed

	// re-read the original image
	image=  cv::imread(path01);

	// define image ROI at image bottom-right
	imageROI= image(cv::Rect(image.cols-logo.cols,
		                    image.rows-logo.rows,
		                    logo.cols,logo.rows));
	// or using ranges:
    // imageROI= image(cv::Range(image.rows-logo.rows,image.rows), 
    //                 cv::Range(image.cols-logo.cols,image.cols));

    // use the logo as a mask (must be gray-level)
    cv::Mat mask(logo);

	// insert by copying only at locations of non-zero mask
	logo.copyTo(imageROI,mask);
	cv::imshow("Image", mask); 
    //cv::waitKey(0); // wait for a key pressed

	cv::imshow("Image2", image); // show the image
	cv::waitKey(0); // wait for a key pressed

    return 0;
}

