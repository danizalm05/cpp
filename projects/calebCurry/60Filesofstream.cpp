/* 
Tutorial  60 - Writing to Files with ofstream
https://www.youtube.com/watch?v=XJhIJ6J5obY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=62
 
      save file  
      compile:  g++  60Filesofstream.cpp -o    fstre.exe  -std=c++11
 */
 
#include <fstream>
#include <vector>
#include <iostream> 
 
  int main(){
   
    std::string filename;
    std::cout << "File name\n";
    std::cin >>  filename;
    // std::ofstream file("hello.txt"); //Create a new  file
    //std::ofstream file("hello.txt",std::ios::app); //Append input to the file
    std::ofstream file(filename.c_str(),std::ios::app); //Append input to 
                                                        //the file
    //file.open("hello.txt"); 
    

    if(file.is_open()){
      std::cout << "Sucess output to file " << filename;
    }
    std::vector<std::string>  names;
    names.push_back("1bb");
    names.push_back("2ccvvcvcvcvcvcvc");
    names.push_back("3dd dd");
    names.push_back("4   ee");
    for(std::string name: names){
           file << name << std::endl;
    }
    
     
    file.close();
    return(0);
} 

 