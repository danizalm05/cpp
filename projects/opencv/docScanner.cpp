/* Project 2 - Document Scanner
https://www.youtube.com/watch?v=2FYm3GOonhk   03:03:00  03:20:00
https://www.computervision.zone/courses/opencv-cv/
 
 https://github.com/murtazahassan/Learn-OpenCV-cpp-in-4-Hours
 */


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>



cv::Mat imgOriginal, imgGray, imgBlur, imgCanny, imgThre, imgDil, imgErode, imgWarp, imgCrop;
std::vector<cv::Point> initialPoints, docPoints;
float w = 420, h = 596;

cv::Mat preProcessing(cv::Mat img)
{
	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(imgGray, imgBlur, cv::Size(3, 3), 3, 0);
    cv::Canny(imgBlur, imgCanny, 25, 75);
	cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
    cv::dilate(imgCanny, imgDil, kernel);
	//cv::erode(imgDil, imgErode, kernel);
	return imgDil;
}

std::vector<cv::Point> getContours(cv::Mat image) {

	std::vector<std::vector<cv::Point>> contours;
	std::vector<cv::Vec4i> hierarchy;

	findContours(image, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
	//drawContours(img, contours, -1, Scalar(255, 0, 255), 2);
	std::vector<std::vector<cv::Point>> conPoly(contours.size());
	std::vector<cv::Rect> boundRect(contours.size());

	std::vector<cv::Point> biggest;
	int maxArea = 0;

	for (int i = 0; i < contours.size(); i++)
	{
		int area = contourArea(contours[i]);
		

		std::string objectType;

		if (area > 1000)
		{
			float peri = arcLength(contours[i], true);
			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
			
			if (area > maxArea && conPoly[i].size() == 4) {
				
				drawContours(imgOriginal, conPoly, i, cv::Scalar(255, 0, 255), 5);
				biggest = { conPoly[i][0],conPoly[i][1] ,conPoly[i][2] ,conPoly[i][3] };
				maxArea = area;
				
				
			}
			drawContours(imgOriginal, conPoly, i, cv::Scalar(255, 0, 255), 2);
			rectangle(imgOriginal, boundRect[i].tl(), boundRect[i].br(), cv::Scalar(0, 255, 0), 5);
		}
	}

	return biggest;
}

void drawPoints(std::vector<cv::Point> points, cv::Scalar color)
{ 
	
	
	for (int i = 0; i < points.size(); i++)
	{  
		std::cout << points[i] << " : " << points.size() << std::endl;
		circle(imgOriginal, points[i], 10, color, cv::FILLED);
		putText(imgOriginal, std::to_string(i), points[i], cv::FONT_HERSHEY_PLAIN, 4, color, 4);
		
	}
}

std::vector<cv::Point> reorder(std::vector<cv::Point> points)
{
	std::vector<cv::Point> newPoints;
	std::vector<int>  sumPoints, subPoints;

	for (int i = 0; i < 4; i++)
	{
		sumPoints.push_back(points[i].x + points[i].y);
		subPoints.push_back(points[i].x - points[i].y);
	}

	newPoints.push_back(points[min_element(sumPoints.begin(), sumPoints.end()) - sumPoints.begin()]); // 0
	newPoints.push_back(points[max_element(subPoints.begin(), subPoints.end()) - subPoints.begin()]); //1
	newPoints.push_back(points[min_element(subPoints.begin(), subPoints.end()) - subPoints.begin()]); //2
	newPoints.push_back(points[max_element(sumPoints.begin(), sumPoints.end()) - sumPoints.begin()]); //3

	return newPoints;
}

cv::Mat getWarp(cv::Mat img, std::vector<cv::Point> points, float w, float h)
{
	cv::Point2f src[4] = { points[0],points[1],points[2],points[3] };
	cv::Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

	cv::Mat matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix, cv::Point(w, h));

	return imgWarp;
}

void main() {
	// string user_name = "gilfm"; "rockman";
	std::string user_name = "gilfm";//"gilfm";
	std::string image_name = "doc2.jpg"; //"shapes.png lambo.png ;2.jpg";"cards.jpg"


	std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
	std::cout << path << std::endl;
	cv::Mat imgOriginal = cv::imread(path);
	
	 
    cv::resize(imgOriginal, imgOriginal, cv::Size(), 0.5, 0.5);
	
	 
	// Preprpcessing - Step 1 
	imgThre = preProcessing(imgOriginal);
	
	
	 // Get Contours - Biggest  - Step 2
	initialPoints = getContours(imgThre);
	
	cv::putText(imgOriginal,
		"Text to add",
		cv::Point(35, 35), // Coordinates (Bottom-left corner of the text string in the image)
		cv::FONT_HERSHEY_COMPLEX_SMALL, // Font
		1.0, // Scale. 2.0 = 2x bigger
		cv::Scalar(255, 0, 255), // BGR Color
		2, // Line Thickness (Optional)
		cv::LINE_AA);

	drawPoints(initialPoints, cv::Scalar(230, 0, 255));
	/*
	docPoints = reorder(initialPoints);
	//drawPoints(docPoints, Scalar(0, 255, 0));

	// Warp - Step 3 
	imgWarp = getWarp(imgOriginal, docPoints, w, h);

	//Crop - Step 4
	int cropVal = 5;
	Rect roi(cropVal, cropVal, w - (2 * cropVal), h - (2 * cropVal));
	imgCrop = imgWarp(roi);

	imshow("Image", imgOriginal);
	//imshow("Image Dilation", imgThre);
	//imshow("Image Warp", imgWarp);
	imshow("Image Crop", imgCrop);
	*/

	
	cv::imshow("Image original", imgOriginal);
	cv::imshow("Image Step 1 ", imgThre);
	cv::waitKey(0);

}
/*

cv::putText(imgOriginal,
		"Text to add",
		cv::Point(35, 35), // Coordinates (Bottom-left corner of the text string in the image)
		cv::FONT_HERSHEY_COMPLEX_SMALL, // Font
		1.0, // Scale. 2.0 = 2x bigger
		cv::Scalar(255, 0, 255), // BGR Color
		2, // Line Thickness (Optional)
		cv::LINE_AA);



*/