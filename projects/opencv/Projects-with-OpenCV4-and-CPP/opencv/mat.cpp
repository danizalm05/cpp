/*------------------------------------------------------------------------------------------*\
 
OpenCV3 Computer Vision Application Programming Cookbook
 page 23
 
\*------------------------------------------------------------------------------------------*/

#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

// test function that creates an image
cv::Mat function() {

   // create image
   cv::Mat ima(500,500,CV_8U,50);
   // return it
   return ima;
}

int main() {

	// create a new image made of 240 rows and 320 columns
	cv::Mat image1(240,320,CV_8U,100);
	// or:
	// cv::Mat image1(240,320,CV_8U,cv::Scalar(100));

	cv::imshow("Image", image1); // show the image
	cv::waitKey(0); // wait for a key pressed

	// re-allocate a new image
    // (only if size or type are different)
	image1.create(200,200,CV_8U);
	image1= 200;

	cv::imshow("Image", image1); // show the image
	cv::waitKey(0); // wait for a key pressed

	// create a red color image
	// channel order is BGR
	cv::Mat image2(240,320,CV_8UC3,cv::Scalar(0,0,255));

	// or:
	// cv::Mat image2(cv::Size(320,240),CV_8UC3);
	// image2= cv::Scalar(0,0,255);

	cv::imshow("Image", image2); // show the image
	cv::waitKey(0); // wait for a key pressed

	// read an image
	std::string user_name = "rockman";
	std::string image_name = "2.jpg";
	

	std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;

	cv::Mat image3=  cv::imread(path);

	// all these images point to the same data block
	cv::Mat image4(image3);
	image1= image3;

	// these images are new copies of the source image
	image3.copyTo(image2);
	cv::Mat image5= image3.clone();

	// transform the image for testing
	cv::flip(image3,image3,1); 

	// check which images have been affected by the processing
	cv::imshow("Image 3", image3); 
	cv::imshow("Image 1", image1); 
	cv::imshow("Image 2", image2); 
	cv::imshow("Image 4", image4); 
	cv::imshow("Image 5", image5); 
	cv::waitKey(0); // wait for a key pressed

    // get a gray-level image from a function
    cv::Mat gray= function();

	cv::imshow("Image", gray); // show the image
	cv::waitKey(0); // wait for a key pressed

	// read the image in gray scale
	image1=  cv::imread(path, cv::IMREAD_GRAYSCALE ); 

	// convert the image into a floating point image [0,1]
	image1.convertTo(image2,CV_32F,1/255.0,0.0);

	cv::imshow("Image", image2); // show the image

	// Test cv::Matx
	// a 3x3 matrix of double-precision
	cv::Matx33d matrix(3.0, 2.0, 1.0,
		               2.0, 1.0, 3.0,
		               1.0, 2.0, 3.0);
	// a 3x1 matrix (a vector)
	cv::Matx31d vector(5.0, 1.0, 3.0);
	// multiplication
	cv::Matx31d result = matrix*vector;

	std::cout << result;

	cv::waitKey(0); // wait for a key pressed
	return 0;
}

