/* 
Tutorial 61 - Reading from Files with ifstream     - using get
version 2
https://www.youtube.com/watch?v=ruf_pj2hGpw&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=63

      save file  
       
      compile:  g++  61ReadFile-02.cpp -o    Readf02.exe  -std=c++11
      run :  ./Readf2
     5:10
 */
 
#include <fstream>
#include <vector>
#include <iostream> 
 
  int main(){
    
    std::string filename = "vect.cpp";
    std::ifstream file(filename); //open  file
    std::string line;
    getline(file, line);
    std::cout << line << "\n";
    //char temp = file.get(); 
    //std::cout << temp << "\n";
   
    return(0);
} 

 