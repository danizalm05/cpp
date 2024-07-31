/* Chapter 7: Shapes Contor Detection
https://www.youtube.com/watch?v=2FYm3GOonhk  02:16:00
https://www.computervision.zone/courses/opencv-cv/

 https://github.com/murtazahassan/Learn-OpenCV-cpp-in-4-Hours
 */


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>



void main() {
 
	 
	std::string user_name = "gilfm";//  "gilfm"; "rockman";
	std::string image_name = "1.jpg"; //"shapes.png lambo.png ;2.jpg";"cards.jpg"


	std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
	cv::Mat img = cv::imread(path);
	std::cout << path << std::endl;
	cv::imshow("Image", img);
	//                            haarcascade_frontalface_default.xml
	std::string cade_file_name = "haarcascade_frontalface_default.xml";
	//std::string xmlpath = "C:/Users/" + user_name + "/Pictures/Resources/" + cade_file_name;
	//std::string xmlpath = "C:/Users/" + user_name + "/Pictures/Resources/" + cade_file_name;

	std::string xmlpath = "C:/Users/" + user_name + "/Pictures/faces/haarcascade_frontalface_default.xml";

	cv::CascadeClassifier faceCascade;
	
	
	std::cout << xmlpath << std::endl;
	faceCascade.load(xmlpath);
	
	if (faceCascade.empty()) { 
		 std::cout << "XML file not loaded" << std::endl; 
	}

	std::vector<cv::Rect> faces;
	faceCascade.detectMultiScale(img, faces, 1.1, 10);

	for (int i = 0; i < faces.size(); i++)
	{
		rectangle(img, faces[i].tl(), faces[i].br(), cv::Scalar(255, 0, 255), 3);
	}

	imshow("Image", img);
	cv::waitKey(0);
	 

}