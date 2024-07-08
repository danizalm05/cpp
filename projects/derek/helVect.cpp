

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
    std::cout << "Enter Miles55564s : "; 
    getline(std::cin, sMiles); 

    
    // Convert from string to double
    dMiles = std::stod(sMiles);
    
    // Convert from miles to km
    dKilometers = dMiles * 1.60934;
   
    // Output the results
    printf("%.1f miles= equals %.4f kilometers\n", dMiles, dKilometers);
    
   

    return 0;

}//main