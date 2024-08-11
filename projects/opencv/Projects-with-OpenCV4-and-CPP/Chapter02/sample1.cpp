 /*
 Building Computer Vision Projects with OpenCV 4 and C++
 https://github.com/PacktPublishing/Building-Computer-Vision-Projects-with-OpenCV4-and-CPlusPlus/blob/master/Chapter02/sample1.cpp
 */

#include "opencv2/core.hpp"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include <windows.h>
#include <Lmcons.h>
using namespace cv;
using namespace std;


int main() {

    //C:\Users\rockman\source\repos
    
    // string user_name = "gilfm"; "rockman";
    string user_name = "gilfm";
    string image_name = "lena.jpg";// "2.jpg";
    string video_name = "1.mp4";

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/"  + image_name;
    string video_path = "C:/Users/" + user_name + "/Videos/Captures/"+ video_name;
 
    Mat img;
    cout << path;
     
    // Read images
     Mat color = imread(path);
     Mat gray = imread(path, IMREAD_GRAYSCALE);

     if (!color.data) // Check for invalid input
     {
         cout << "Could not open or find the image" << std::endl;
         return -1;
     }
     // Write images
     imwrite("lenaGray.jpg", gray);

     // Get same pixel with opencv function
     int myRow = color.cols - 1;
     int myCol = color.rows - 1;
     auto pixel = color.at<Vec3b>(myRow, myCol);
     cout << "Pixel value (B,G,R): (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;

     // show images
     imshow("Lena BGR", color);
     imshow("Lena Gray", gray);
     // wait for any key press
     waitKey(0);
     return 0;
}