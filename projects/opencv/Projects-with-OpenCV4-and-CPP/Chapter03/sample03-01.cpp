/*
* chapter 3/ sample1
 Building Computer Vision Projects with OpenCV 4 and C++
 github.com/PacktPublishing/Building-Computer-Vision-Projects-with-OpenCV4-and-CPlusPlus/blob/master/Chapter03
 page 105- 111
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



int main() {



    //C:\Users\rockman\source\repos

    // string user_name = "gilfm"; "rockman";
    string user_name = "rockman";
    string image_name = "lena.jpg"; 
    string image_name2 = "photo.jpg"; 

    string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name;
    string path2 = "C:/Users/" + user_name + "/Pictures/Saved Pictures/" + image_name2;

    Mat img;
    cout << path;

    
    // Read images
    Mat lena = imread(path);
    Mat photo = imread(path2);

   
    Mat gray = imread(path, IMREAD_GRAYSCALE);
    namedWindow("Lena", WINDOW_NORMAL);//allows resize 
    if (!lena.data) // Check for invalid input
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    namedWindow("Photo", WINDOW_AUTOSIZE);//automatically adjusted
    if (!photo.data) {
        cout << "Photo.jpg image missing!" << endl;
        return -1;
    }
    // Move window
    moveWindow("Lena", 10, 10);
    moveWindow("Photo", 520, 10);
    // Get same pixel with opencv function
    int myRow = lena.cols - 4;
    int myCol = lena.rows - 4;
    auto pixel = lena.at<Vec3b>(myRow, myCol);
    cout << "Pixel: (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;

    // show images
    imshow("Lena", lena);
    imshow("Photo", photo);
    resizeWindow("Lena", 512, 512);

    // wait for any key press
    waitKey(0);

    // Destroy the windows
    destroyWindow("Lena");
    destroyWindow("Photo");
    // wait for any key press
    waitKey(0);

    // Create 10 windows
    for (int i = 0; i < 10; i++)
    {
        ostringstream ss;
        ss << "Photo " << i;
        namedWindow(ss.str());
        moveWindow(ss.str(), 20 * i, 20 * i);
        imshow(ss.str(), photo);
    }

    waitKey(0);
    // Destroy all windows
    destroyAllWindows();
    return 0;




}