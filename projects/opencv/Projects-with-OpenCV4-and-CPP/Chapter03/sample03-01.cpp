/*
* chapter 3/ sample1
 Building Computer Vision Projects with OpenCV 4 and C++
 github.com/PacktPublishing/Building-Computer-Vision-Projects-with-OpenCV4-and-CPlusPlus/blob/master/Chapter03
 page 105
 */


 // OpenCV includes
#include "opencv2/core.hpp"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>





#include <windows.h>
#include <Lmcons.h>
using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

int main() {



    //C:\Users\rockman\source\repos

    // string user_name = "gilfm"; "rockman";
    string user_name = "gilfm";
    string image_name = "lena.jpg";// "2.jpg";
    string image_name2 = "road.jpg"; 

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
    string path2 = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name2;

    Mat img;
    cout << path;

    
    // Read images
    Mat lena = imread(path);
    Mat photo = imread(path2);

   
    Mat gray = imread(path, IMREAD_GRAYSCALE);

    if (!lena.data) // Check for invalid input
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    // Write images
    imwrite("lenaGray.jpg", gray);

    // Get same pixel with opencv function
    int myRow = lena.cols - 1;
    int myCol = lena.rows - 1;
    auto pixel = lena.at<Vec3b>(myRow, myCol);
    cout << "Pixel value (B,G,R): (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;

    // show images
    imshow("Lena BGR", lena);
    imshow("Lena Gray", gray);
    // wait for any key press
    waitKey(0);
    return 0;




}