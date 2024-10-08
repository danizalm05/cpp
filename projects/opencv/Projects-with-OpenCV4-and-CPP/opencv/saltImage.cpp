/*------------------------------------------------------------------------------------------*\
    OpenCV3 Computer Vision Application Programming Cookbook 
    Robert Laganiere, Packt Publishing, 2016.
 \*------------------------------------------------------------------------------------------*/

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <random>

std::string user_name = "rockman";
std::string image_name = "boldt.jpg";
std::string path = "C:/Users/" + user_name + "/Pictures/opencv/" + image_name;


// Add salt noise to an image
void salt(cv::Mat image, int n) {

	// C++11 random number generator
	std::default_random_engine generator;
	std::uniform_int_distribution<int> randomRow(0, image.rows - 1);
	std::uniform_int_distribution<int> randomCol(0, image.cols - 1);
	std::uniform_int_distribution<int> randColor(0, 255);
	int i,j, randcolr;
	for (int k=0; k<n; k++) {

		// random image coordinate
		i= randomCol(generator);
		j= randomRow(generator);
		randcolr = randColor(generator);//Random color
		if (image.type() == CV_8UC1) { // gray-level image

			// single-channel 8-bit image
			image.at<uchar>(j,i)= 255; 

		} else if (image.type() == CV_8UC3) { // color image

			// 3-channel image
			image.at<cv::Vec3b>(j,i)[0]= 255; 
			image.at<cv::Vec3b>(j, i)[1] = randcolr;// 255;
			image.at<cv::Vec3b>(j,i)[2]= 255; 

			// or simply:
			// image.at<cv::Vec3b>(j, i) = cv::Vec3b(255, 255, 255);
		}
	}
}

// This is an extra version of the function
// to illustrate the use of cv::Mat_
// works only for a 1-channel image
void salt2(cv::Mat image, int n) {

	// must be a gray-level image
	CV_Assert(image.type() == CV_8UC1);

	// C++11 random number generator
	std::default_random_engine generator;
	std::uniform_int_distribution<int> randomRow(0, image.rows - 1);
	std::uniform_int_distribution<int> randomCol(0, image.cols - 1);

	// use image with a Mat_ template
	cv::Mat_<uchar> img(image);
	
    //  or with references:
    //	cv::Mat_<uchar>& im2= reinterpret_cast<cv::Mat_<uchar>&>(image);

	int i,j;
	for (int k=0; k<n; k++) {

		// random image coordinate
		i = randomCol(generator);
		j = randomRow(generator);

		// add salt
		img(j,i)= 255; 
	}
}


int main()
{
	// open the image
	cv::Mat image= cv::imread(path,1);

	// call function to add noise
	salt(image,3000);

	// display result
	cv::namedWindow("Image");
	cv::imshow("Image",image);

	// write on disk
	//cv::imwrite("salted.bmp",image);

	cv::waitKey();

	// test second version
	image= cv::imread(path,0);

	salt2(image, 500);

	cv::namedWindow("Image");
	cv::imshow("Image",image);

	cv::waitKey();

	return 0;
}


