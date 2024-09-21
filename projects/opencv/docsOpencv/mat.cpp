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
std::string image_name = "2.jpg";
 

std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/";
std::string image_path = path + image_name;


int main()
{
    //std::string image_path = samples::findFile("starry_night.jpg");
    
    cv::Mat A, C;   // creates just the header parts
    A =  cv::imread(image_path, cv::IMREAD_COLOR);

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

    int k = cv::waitKey(0); // Wait for a keystroke in the window 

    //ROI (region of interest)  Create a new header with the new boundaries:
    cv::Mat D(A, cv::Rect(10, 10, 300, 300)); // using a rectangle
    cv::Mat E = A(cv::Range::all(), cv::Range(1, 415)); // using row and column boundaries
    cv::imshow(" Rect(10, 10, 300, 300)",D);
    cv::imshow(" Range::all(), cv::Range(1,415)",E);
  
    //copy the matrix itself 
    // modifying F or G will not affect the matrix pointed to by the A's header
    cv::Mat F = A.clone();
    cv::Mat G;
    A.copyTo(G);

    cv::waitKey(0);

    //Storing methods
    return 0;
}