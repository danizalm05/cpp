/* 
Tutorial 61 - Reading from Files with ifstream
https://www.youtube.com/watch?v=ruf_pj2hGpw&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=63

      save file  
      g++  60Filesofstream.cpp -o    readf.exe  -std=c++11
      compile:  g++  61ReadFile.cpp -o    Readf.exe  -std=c++11
      run :  ./Readf
     3:43 
 */
 
#include <fstream>
#include <vector>
#include <iostream> 
 
  int main(){
    
    std::string filename = "vect.cpp";
    std::ifstream file(filename); //open  file
    std::vector<std::string> names;
    std::string input;
    
    while(file >> input){
        names.push_back(input);

    }
    for(std::string name: names){
        std::cout << name << std::endl;
    }
    
    return(0);
} 

 