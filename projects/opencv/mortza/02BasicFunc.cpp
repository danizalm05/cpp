//02BasicFunc.cpp
///////////////  Basic Functions  //////////////////////

//https://www.youtube.com/watch?v=2FYm3GOonhk  35:36 50:06
//https://www.computervision.zone/courses/opencv-cv/
//https://www.computervision.zone/topic/chapter-2-basic-functions-2/
//C:/Users/gilfm/source/repos
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>


using namespace cv;
using namespace std;

// string user_name = "rockman"; "gilfm";
string user_name = "rockman";
string image_name = "1.jpg";
 

string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
 


void main() {

	//string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(imgGray, imgBlur, Size(7, 7), 5, 0);
	Canny(imgBlur, imgCanny, 25, 75);// edge detection algorithm

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(imgCanny, imgDil, kernel); //Expanding 
	erode(imgDil, imgErode, kernel); // computes a local minimum
	imshow("Image", img);
	imshow("Image Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erode", imgErode);
	waitKey(0);
}
