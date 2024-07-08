/*Load image file*/
//https://www.youtube.com/watch?v=2FYm3GOonhk  22:30
//https://www.computervision.zone/courses/opencv-cv/
//https://www.computervision.zone/topic/chapter-1-read-images-videos-and-webcams/



#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {

    //string path = "Resources/test.png";
    string path = "C:/Users/gilfm/Pictures/Saved Pictures/2.jpg";

    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);

}