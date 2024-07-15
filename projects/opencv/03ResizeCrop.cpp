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

	imshow("Image", img);

	
	Mat imgResize, imgCrop;

	//cout << img.size() << endl;
	//resize(img, imgResize, Size(100,100));
	 resize(img, imgResize, Size(), 0.5, 0.5);
	 
	Rect roi(200, 100, 300, 300);//x,y width ,hight
	imgCrop = img(roi);

	
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);
	waitKey(0);


}