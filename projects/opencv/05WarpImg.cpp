/* Chapter 5 � Warp Images 
https://www.youtube.com/watch?v=2FYm3GOonhk  01:11:00   01:22:00  
https://www.computervision.zone/courses/opencv-cv/ 
https://www.computervision.zone/topic/chapter-5-warp-images/
 https://github.com/murtazahassan/Learn-OpenCV-cpp-in-4-Hours
 */
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include <windows.h>
#include <Lmcons.h>
using namespace cv;
using namespace std;




void main() {



    //C:\Users\rockman\source\repos

    // string user_name = "gilfm"; "rockman";
    string user_name = "rockman";//"gilfm";
    string image_name = "cards.jpg";//2.jpg";
    

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
    
   Mat img;
   img = imread(path);
      

   Mat matrix, imgWarp;
   float w = 250, h = 350;

   Point2f src[4] = { {529,142},{771,190},{405,395},{674,457} };//floating points values
   Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

   matrix = getPerspectiveTransform(src, dst);
   warpPerspective(img, imgWarp, matrix, Point(w, h));

   for (int i = 0; i < 4; i++)
   {
	   circle(img, src[i], 10, Scalar(0, 0, 255), FILLED);
   }

   imshow("Image", img);
   imshow("Image Warp", imgWarp);


     waitKey(0);
     
  
    
}