/*  Project 1 - Virtual Painter  */
//https://www.youtube.com/watch?v=2FYm3GOonhk   02:24:00 - 02:38:00
// https://github.com/murtazahassan/Learn-OpenCV-cpp-in-4-Hours
//https://www.computervision.zone/topic/chapter-1-read-images-videos-and-webcams/


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int Webcam_ID = 0;
Mat img;
VideoCapture cap(Webcam_ID);
vector<vector<int>> newPoints;  // to store all points

/////////////////////  COLOR VALUES ////////////////////////////////
						    // hmin, smin, vmin hmax, smax, vmax
vector<vector<int>> myColors{ {62, 152, 47, 145, 252, 255}, // blue
					          {68, 72, 156, 102,  126, 255} // green
                            };
vector<Scalar> myColorValues{ 
	                          {220,  50   ,0}, // blue
			    		      {0,255 ,0}  // green 
                            }; 	
////////////////////////////////////////////////////////////////////

Point getContours(Mat image) {


	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;

	findContours(image, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	//drawContours(img, contours, -1, Scalar(255, 0, 255), 2);
	vector<vector<Point>> conPoly(contours.size());
	vector<Rect> boundRect(contours.size());

	Point myPoint(0, 0);

	for (int i = 0; i < contours.size(); i++)
	{
		int area = contourArea(contours[i]);
		cout << area << endl;

		string objectType;

		if (area > 1000)
		{
			float peri = arcLength(contours[i], true);
			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);

			cout << conPoly[i].size() << endl;
			boundRect[i] = boundingRect(conPoly[i]);
			myPoint.x = boundRect[i].x + boundRect[i].width / 2;
			myPoint.y = boundRect[i].y;

			//drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
			//rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
		}
	}
	return myPoint;
}


vector<vector<int>> findColor(Mat img)
{
	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	for (int i = 0; i < myColors.size(); i++)
	{
		Scalar lower(myColors[i][0], myColors[i][1], myColors[i][2]);
		Scalar upper(myColors[i][3], myColors[i][4], myColors[i][5]);
		Mat mask;
		inRange(imgHSV, lower, upper, mask);
		//imshow(to_string(i), mask);
		Point myPoint = getContours(mask);
		if (myPoint.x != 0) {
			newPoints.push_back({ myPoint.x,myPoint.y,i });
		}
	}
	return newPoints;
}

void drawOnCanvas(vector<vector<int>> newPoints, vector<Scalar> myColorValues)
{

	for (int i = 0; i < newPoints.size(); i++)
	{
		circle(img, Point(newPoints[i][0], newPoints[i][1]), 10, myColorValues[newPoints[i][2]], FILLED);
	}
}


void main() {

	while (true) {

		cap.read(img);
		newPoints = findColor(img);
		drawOnCanvas(newPoints, myColorValues);

		imshow("Image", img);
		waitKey(1);
	}
}

