/* math_stuff.cpp
demonstration of  Multifile Compilation
 
 1.mainf.cpp: main file
 2.utilf.cpp: util file
 
 https://www.youtube.com/watch?v=f-NrGNommfg&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=75
       compile:  
         cd   calebCurry
         g++  mainf.cpp  utilf.cpp  -o    mut.exe  -std=c++11
          run :  ./mut
   
 */

 #include <iostream>
 #include <vector>
 #include "mainf.h"
       
       
 
 int main() {
    
    int data[] = {1,2,3};
    util::print_array(data,3);
    std::cout << data[0]<< std::endl;
    return 0;
 
 }