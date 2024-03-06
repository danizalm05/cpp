/* 
Tutorial 58 - Range Based For Loop
   https://www.youtube.com/watch?v=8qrZYjL2jBg&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=60
    compile: 
       save file  
       58RangeLoop.cpp
       g++  58RangeLoop.cpp -o  RangeLoop.cpp  -std=c++11
  
   */
#include <iostream>
#include <climits>
#include <cstdlib>
#include <vector>
#include <array> 
  int main(){
  
  int data[] = {1,2,3,4,5,6,7};

  
  
   for(int i = 0; i < 6; i++){
      std::cout <<  data[i]<< "\t";
   }
    std::cout << "\n";
   
     //Range Based For Loop
  for( int n: data){
     std::cout << n << "\t";
} 

  }