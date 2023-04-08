 /*    
 45 - Intro to Arrays and Vectors
 45: https://www.youtube.com/watch?v=GW3LO_ZByXY
 46: https://www.youtube.com/watch?v=HpBel7_2k0k
 https://www.youtube.com/watch?v=GW3LO_ZByXY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=46

 47- Passing Arrays to Functions and sizeof Operator
 https://www.youtube.com/watch?v=_afeydHJ9Fs&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=49
 48 - Fill Array from Input
 https://www.youtube.com/watch?v=5NdWaGzSNes&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=50 
 49 - Using an Array to Keep Track of Guesses
 https://www.youtube.com/watch?v=aAMIig6zg0A&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=51
  
 50 - Intro to vectors
 https://www.youtube.com/watch?v=YErKhAYBj2A&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=52
 g++ arrayVectors.cpp -o array  

 51 - Creating a Vector
https://www.youtube.com/watch?v=Fm9otubOsqQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=53
 
 
   */

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
  
void print_array(int array[], int size)
{
  std::cout <<"sizeof(array) =  " << sizeof(array)<<"  size =  "<< size <<std::endl;  //Print the size of a pointer to an array
  for(int i=0; i<size; i++){ 
      std::cout <<array[i]<< '-';
  }  


}//print_array
main(){

  std::vector<int>  data{1,2,3};
  data.push_back(12);
  std::cout << data[1] << std::endl;
  std::cout << data[data.size() -1] << std::endl;
  data.pop_back();//Remove last  item

  int guesses01[] = {10, 13 , 54, 42, 12 };   
  std::cout <<"sizeof(guesses01) = " << sizeof(guesses01)<< std::endl;  
  int size = sizeof(guesses01)/sizeof(int) ;
  
  
  
  
  print_array(guesses01, size  );

  guesses01[3] = 300;  
  std::cout << guesses01[3]<< std::endl;    
  std::cout <<"size = " << size<< std::endl; 

  //Fill Array from Input
  std::cout <<"\n\nFill Array from Input\n " <<  std::endl; 

  const int size02 =300;
  int gusses02[size02];
  int count = 0;
  for (int i =0; i<size02;i++){
     //std::cout <<i << "= "<< gusses02[i]<< std::endl; 
     if(std::cin>>  gusses02[i]){//if input is integer
            count++;
     }
     else{ //invalid character (not integer)
       std::cout << "Invalid character,end of input. "<<   
        std::endl;
       break;
     }
  }
 
  std::cin.clear();//Clear last (invalid) input
 
   print_array(gusses02, count  );  
   return 0;  
}//main
   
    
 