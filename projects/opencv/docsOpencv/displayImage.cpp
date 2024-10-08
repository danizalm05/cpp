 /*
Display Image

https://docs.opencv.org/4.x/d6/d00/tutorial_py_root.html 
https://docs.opencv.org/4.x/db/deb/tutorial_display_image.html 
*/
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

 //C:\Users\rockman\source\repos

    // string user_name = "gilfm"; "rockman";
std::string user_name = "gilfm";
std::string image_name = "2.jpg";
 

std::string path = "C:/Users/" + user_name + "/Pictures/Saved Pictures/";
std::string image_path = path + image_name;


int main()
{
    //std::string image_path = samples::findFile("starry_night.jpg");
    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);

    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }

    cv::imshow("Display window", img);
    int k = cv::waitKey(0); // Wait for a keystroke in the window

    if (k == 's')
    {
        cv::imwrite("starry_night.png", img);
    }

    return 0;
}