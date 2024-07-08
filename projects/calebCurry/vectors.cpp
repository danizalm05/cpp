 /*    
   Vectors
  
 50 - Intro to vectors
 https://www.youtube.com/watch?v=YErKhAYBj2A&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=52
 g++ arrayVectors.cpp -o array  

 51 - Creating a Vector
https://www.youtube.com/watch?v=Fm9otubOsqQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=53
 
 52 - Passing Vectors to Functions
 https://www.youtube.com/watch?v=aUhYCyU2Meo&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=54
 
   */

#include <iostream>
#include <vector>
 

 void print_vector(std::vector<int> data){
  std::cout <<"\n -------------\n" << "\n";
   for (int i = 0; i < data.size(); i++){
       std::cout << data[i] << "\t";
   } 
 
 } //print_vector


int main(){

  std::vector<int>  data{1,2,3,4,5,6};
  print_vector(data);
  data.push_back(12);
  print_vector(data);
  std::cout <<"\n ********-\n" << "\n";
  std::cout << data[1] << std::endl;
  std::cout << data[data.size() -1] << std::endl;
  std::cout <<"\n ********-\n" << "\n";
  data.pop_back();//Remove last  item
  print_vector(data);
    
}//main
   
    
 