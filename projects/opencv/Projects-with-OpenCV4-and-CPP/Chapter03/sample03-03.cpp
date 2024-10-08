/*
* chapter 3/ sample3
 Building Computer Vision Projects with OpenCV 4 and C++
 github.com/PacktPublishing/Building-Computer-Vision-Projects-with-OpenCV4-and-CPlusPlus/blob/master/Chapter03
 page 112
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


int blurAmount = 15;

// Trackbar call back function
static void onChange(int pos, void* userInput);

//Mouse callback
static void onMouse(int event, int x, int y, int, void* userInput);
int main() {



         //C:\Users\rockman\source\repos

       // string user_name = "gilfm"; "rockman";
    string user_name = "gilfm";
    string image_name = "lena.jpg";// "2.jpg";
    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
     

    Mat img;
    cout << path;

    
    // Read images
    Mat lena = imread(path);
    namedWindow("Lena");
    imshow("Lena", lena);
     
    if (!lena.data) // Check for invalid input
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    createTrackbar("Lena", "Lena", &blurAmount, 30, onChange, &lena);

    setMouseCallback("Lena", onMouse, &lena);
    onChange(blurAmount, &lena);
    
    //imshow("Lena", lena);
     
    // wait for any key press
    waitKey(0);
    return 0;
}


// Trackbar call back function
static void onChange(int pos, void* userInput)
{
    if (pos <= 0)
        return;
    // Aux variable for result
    Mat imgBlur;

    // Get the pointer input image
    Mat* img = (Mat*)userInput;

    // Apply a blur filter
    blur(*img, imgBlur, Size(pos, pos));

    // Show the result
    imshow("Lena", imgBlur);
}

//Mouse callback
static void onMouse(int event, int x, int y, int, void* userInput)
{
    if (event != EVENT_LBUTTONDOWN)
        return;

    // Get the pointer input image
    Mat* img = (Mat*)userInput;

    // Draw circle
    circle(*img, Point(x, y), 10, Scalar(0, 255, 0), 3);

    // Call on change to get blurred image
     onChange(blurAmount, img);

}