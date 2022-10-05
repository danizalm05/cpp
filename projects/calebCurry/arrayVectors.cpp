 /*    
 Tutorial 45 - Intro to Arrays and Vectors
 45: https://www.youtube.com/watch?v=GW3LO_ZByXY
 46: https://www.youtube.com/watch?v=HpBel7_2k0k
 https://www.youtube.com/watch?v=GW3LO_ZByXY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=46

 
  
   g++ arrayVectors.cpp -o array  
   4:30
   */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
  

main(){
    
  int guesses[] = {10, 13 , 54, 42, 12,12,13};  
  std::cout << guesses[3]<< std::endl;  
  guesses[3] = 300;  
  std::cout << guesses[3]<< std::endl;    
     
  return 0;   
}//main
   
    
 