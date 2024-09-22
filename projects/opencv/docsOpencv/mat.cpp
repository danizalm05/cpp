/*
Mat - The Basic Image Container
 how OpenCV stores and handles images.
https://docs.opencv.org/4.x/de/d7a/tutorial_table_of_content_core.html
https://docs.opencv.org/4.x/d6/d6d/tutorial_mat_the_basic_image_container.html

Mat is a class with two data parts:
1. the matrix header
2. pointer to the matrix containing the pixel values
 .
The size of the matrix itself may vary from image to image
*/
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

//C:\Users\rockman\source\repos

   // string user_name = "gilfm"; "rockman";
std::string user_name = "rockman";
std::string image_name = "1.jpg";


std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/";
std::string image_path = path + image_name;


int main()
{
    //std::string image_path = samples::findFile("starry_night.jpg");

    cv::Mat A, C;   // creates just the header parts
    A = cv::imread(image_path, cv::IMREAD_COLOR);

    if (A.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    /*
    All the next A,B,C objects, point to the same single data matrix and making a modification using
    any of them will affect all the other ones. In practice the different objects just provide
    different access methods to the same underlying data.
    But, their header parts are different.
     */
    cv::imshow("A mat", A);
    cv::Mat B(A);                     // Use the copy constructor
    cv::imshow(" B mat", B);
    C = A;                            // Assignment operator   only copy the header.
    cv::imshow(" C mat", C);

    //int k = cv::waitKey(0); // Wait for a keystroke in the window 

    //ROI (region of interest)  Create a new header with the new boundaries:
    cv::Mat D(A, cv::Rect(10, 10, 300, 300)); // using a rectangle
    cv::Mat E = A(cv::Range::all(), cv::Range(1, 415)); // using row and column boundaries
    cv::imshow(" Rect(10, 10, 300, 300)", D);
    cv::imshow(" Range::all(), cv::Range(1,415)", E);

    //copy the matrix itself 
    // modifying F or G will not affect the matrix pointed to by the A's header
    cv::Mat F = A.clone();
    cv::Mat G;
    A.copyTo(G);

  

    cv::Mat M(2, 2, CV_8UC3, cv::Scalar(0, 0, 255));
    /*
    * M =
        [  0,   0, 255,   0,   0, 255;
           0,   0, 255,   0,   0, 255     ]
     Two dimensional and multichannel images:
     Specify the data type to use for storing the elements 
     and the number of channels per matrix point. 
     To do this we have multiple definitions constructed 
     according to the following convention:
    CV_[The number of bits per item]
       [Signed or Unsigned]
       [Type Prefix]
       C[The channel number]
   CV_8UC3 means we use unsigned char types 
    8 bit long and each pixel has three of these to 
   form the three channels. 
    
   The cv::Scalar is four element short vector. 
   Specify it and you can initialize all matrix points with a 
   custom value. 
   
    
    */
   
   M.create(4,4, CV_8UC(2));//4X4 matrix each cell holds 2 digit 
   std::cout << "M = " << std::endl << " " << M << std::endl << std::endl;
   cv::Mat E2 = cv::Mat::eye(4, 4, CV_64F);
    std::cout << "E2 = " << std::endl << " " << E2 << std::endl << std::endl;
   cv::Mat O = cv::Mat::ones(2, 2, CV_32F);
    std::cout << "O = " << std::endl << " " << O << std::endl << std::endl;
   cv::Mat Z = cv::Mat::zeros(3, 3, CV_8UC1);
   std::cout << "Z = " << std::endl << " " << Z << std::endl << std::endl;
   

   //For small matrices you may use comma separated initializers or initializer lists (C++11 support is required in the last case):
   cv::Mat C2 = (cv::Mat_<double>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
   std::cout << "C = " << std::endl << " " << C2 << std::endl << std::endl;
   C2 = (cv::Mat_<double>({ 0, -1, 0, -1, 5, -1, 0, -1, 0 })).reshape(3);
   std::cout << "C2 = " << std::endl << " " << C2 << std::endl << std::endl;

   //Create a new header for an existing Mat objec
   cv::Mat RowClone = C2.row(1).clone();
   std::cout << "RowClone = " << std::endl << " " << RowClone << std::endl << std::endl;

   cv::Mat R = cv::Mat(3, 2, CV_8UC3);
   randu(R, cv::Scalar::all(0), cv::Scalar::all(255));
   std::cout << "R = " << std::endl << " " <<R << std::endl << std::endl;

   //Output formatting
   std::cout << "R (default) = " << std::endl << R << std::endl << std::endl;
   //          ---- Output of other common items ----
   cv::Point2f P(5, 1);
   std::cout << "Point (2D) = " << P << std::endl << std::endl;

   cv::Point3f P3f(2, 6, 7);
   std::cout << "Point (3D) = " << P3f << std::endl << std::endl;

   //std::vector via cv::Mat
   std::vector<float> v;
   v.push_back((float)CV_PI);   v.push_back(2);    v.push_back(3.01f);
   std::cout << "Vector of floats via Mat = " << cv::Mat(v) << std::endl << std::endl;

   //std::vector of points
   std::vector<cv::Point2f> vPoints(20);
   for (size_t i = 0; i < vPoints.size(); ++i)
       vPoints[i] = cv::Point2f((float)(i * 5), (float)(i % 7));
   std::cout << "A vector of 2D Points = " << vPoints << std::endl << std::endl;





   cv::waitKey(0);
    return 0;
}