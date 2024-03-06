/* 
 Tutorial 65 - Multidimensional Arrays and Nested Vectors
 https://www.youtube.com/watch?v=2XLat-7zBsg&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=67   
                   
      compile:  
         cd   calebCurry
         g++  65NestedVect.cpp -o    NesVec.exe  -std=c++11
        run :  ./NesVec
   4:35   
 */

 #include <iostream>
 #include <vector> 
 
 int main(){
    
   
  
     //Multidimensional Arrays
    int grades1[][3] = 
           {{1,2,3},{10,20,30},{110,210,310}};
    /**
     * Multidimensional array must have bounds for all dimensions except the first
     */
     std::cout  << "Multidimensional Arrays \n"; 
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
           std::cout << grades1[r][c] << "\t";
   
         }
           std::cout  << "\n";
    }
   
     //Nested Vectors

   std::cout  << " \n\nNested Vectors \n"; 
    std::vector<std::vector<int> > grades= 
           {{1,2,3},{10,20,30},{110,210,310}};
 
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
           std::cout << grades[r][c] << "\t";
   
         }
           std::cout  << "\n";
    }
 
 
 }