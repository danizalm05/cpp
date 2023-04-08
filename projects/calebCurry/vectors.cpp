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
 
  
main(){

  std::vector<int>  data{1,2,3};
  data.push_back(12);
  std::cout << data[1] << std::endl;
  std::cout << data[data.size() -1] << std::endl;
  data.pop_back();//Remove last  item
 
    
}//main
   
    
 