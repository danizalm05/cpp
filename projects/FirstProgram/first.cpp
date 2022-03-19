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
 
    
     if(argc != 1){
    
        // You can also create a newline with \n
        std::cout << "You entered " << argc << " arguments\n";
       for(int i = 0; i < argc; ++i){
        
            // We access each string passed by putting its index between []
            // called the subscript operator
            std::cout << argv[i] << "\n";
        }
    }// if argc != 1 
   
     
    bool bMarried = true;
    char chMyGrade = 'A';// single characters represented by keyboard
    unsigned short int u16Age = 43;//  0 to 65,535
    short int siWeight = 180; // -32,768 to 32,767
    int nDays = 7;//-2147483648 to 2147483647
    long lBigNum = 1000000;// long ints
    float fPi = 3.14159; //  1.17549e-38 to 3.40282e+38
    
    // Show float precision
    float fBigFloat = 1.1111111111;
    float fBigFloat2 = 1.1111111111;
    float fFloatSum = fBigFloat + fBigFloat2;
    
    // Allows you to print with formatting
    // Float addition has 6 digits of precision
    printf("fFloatSum Precision : %.10f\n", fFloatSum);

    // doubles range from 2.22507e-308 to 1.79769e+308
    
    std::cout << "Min double " << 
            std::numeric_limits<double>::min() << "\n";
    std::cout << "Max double " << 
            std::numeric_limits<double>::max() << "\n";
    
    // long doubles range from 3.3621e-4932 to 1.18973e+4932
    long double ldPi = 3.1415926535897932;
    
    // You can have the compiler assign a type
    auto whatWillIBe = true;
    
    // SHOW DATA TYPES MIN & MAX VALUES
    
    std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";
    
    std::cout << "Min unsigned short int " << 
            std::numeric_limits<unsigned short int>::min() << "\n";
    std::cout << "Max unsigned short int " << 
            std::numeric_limits<unsigned short int
            >::max() << "\n";
    
    std::cout << "Min short int " << 
            std::numeric_limits<short int>::min() << "\n";
    std::cout << "Max short int " << 
            std::numeric_limits<short int
            >::max() << "\n";
 
    std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";

    std::cout << "Min long " << std::numeric_limits<long int>::min() << "\n";
    std::cout << "Max long " << std::numeric_limits<long int>::max() << "\n";
 
    std::cout << "Min float " << 
            std::numeric_limits<float>::min() << "\n";
    std::cout << "Max float " << 
            std::numeric_limits<float>::max() << "\n";
    
    std::cout << "Min long double " << 
            std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max long double " << 
            std::numeric_limits<long double>::max() << "\n";
    
    // Get the number of bytes used by a type
    std::cout << "int Size " << sizeof(int) << "\n";
    
    // More about printf()
    // char, int, 5 space right justified int, 
    // 3 decimal float / double, string specifiers
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");
    
     // Create a string
    std::string sQuestion ("Enter Number 1 : ");
    
    // Create empty strings to store values
    std::string sNum1, sNum2;
    
    std::cout << sQuestion;
    
    // Receive user input and store it
    getline(std::cin, sNum1);
    
    std::cout << "Enter Number 2 : ";
    getline(std::cin, sNum2);
    
    // Convert from strings to int
    // std::stod converts from strings to doubles
    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);
    
    // Math Operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));
    
    // ----- PROBLEM : MILES TO KILOMETERS -----
    // Sample knowing that kilometers = miles * 1.60934
    // Enter Miles : 5
    // 5 miles equals 8.0467 kilometers
    
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
    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);
    


    return 0;

}//main