/*   Load image file  */
//https://www.youtube.com/watch?v=2FYm3GOonhk  22:30 35:36
//https://www.computervision.zone/courses/opencv-cv/
//https://www.computervision.zone/topic/chapter-1-read-images-videos-and-webcams/



#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include <windows.h>
#include <Lmcons.h>
using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {

    
    
    //C:\Users\rockman\source\repos
    
    // string user_name = "";
    string user_name = "rockman";
    string image_name = "2.jpg";
    string video_name = "1.mp4";

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/"  + image_name;
    string video_path = "C:/Users/" + user_name + "/Videos/Captures/"+ video_name;
 
    Mat img;
    cout << video_path;
    /*

     img = imread(path);
     imshow("Image", img);
     waitKey(0);
    */

    ///////////////  Video or Webcam //////////////////////
      
     //VideoCapture cap(video_path); //use vidoe file
    int Webcam_ID = 0;
    VideoCapture cap(Webcam_ID);// use the Webcam
       while (true) {
           cap.read(img);
     		imshow("Image", img);
     		waitKey(2);
    	}
  


    

     






}