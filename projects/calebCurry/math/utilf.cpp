/* utilf.cpp
demonstration of  Multifile Compilation
 https://www.youtube.com/watch?v=f-NrGNommfg&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=75
       compile:  
     
   
 */
#ifndef UTILF
#define UTILF
 #include <iostream>
 
 
 #include <vector>
 #include "mainf.h"
 namespace util{
      void print_array(const int data[],int siza) {
        for(int i = 0 ;i< siza; i++){
    // A command  as data[i]++; will create an error massage  since it is a CONST
     //data[i]++;
     std::cout << data[i]<< "\t";
     }
        std::cout <<"\n";
     
   }
 }
#endif 