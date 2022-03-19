/*
How to Download and Install C Cpp Toolset ( gcc g++ gdb )
 in Windows 10 using mingw-w64 and msys2
https://www.youtube.com/watch?v=0HD0pqVtsmw&t=0s

https://code.visualstudio.com/docs/cpp/config-mingw
1. Terminal > Configure Default Build Task. 
2. Choose g++.exe build active file    //Create a tasks.json file 
3.Ctrl+Shift+B or from the Terminal main menu choose Run Build Task.
4. Create a new terminal using the + button
5. Run  the  program './program name"

Debug
 1. Run > Add Configuration... and then choose C++ (GDB/LLDB).
 2. Choose g++.exe build and debug active file.

 Start a debugging session#

  1.Go back to helloworld.cpp so that it is the active file.
  2 Run > Start Debugging.   F5

*/
//derek
//https://www.newthinktank.com/2018/03/c-tutorial-26/




#include <iostream>
#include <vector>
#include <string>

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits> // min and max values for data types
 
 // using namespace std;
  
// Global variables 
int g_iRandNum = 0;

const double PI = 3.1415926535897932; //  constant values that won't change
 


int main(int argc, char* argv[]) {
 
    
    // Create needed variables
    std::string sMiles;
    double dMiles, dKilometers;
    
    // Ask user to input miles and store string input
    std::cout << "Enter Miles : ";
    getline(std::cin, sMiles);
    
    // Convert from string to double
    dMiles = std::stod(sMiles);
    
    // Convert from miles to km
    dKilometers = dMiles * 1.60934;
   
    // Output the results
    printf("%.1f miles= equals %.4f kilometers\n", dMiles, dKilometers);
    
   

    return 0;

}//main