 /*    
 45 - Intro to Arrays and Vectors
 45: https://www.youtube.com/watch?v=GW3LO_ZByXY
 46: https://www.youtube.com/watch?v=HpBel7_2k0k
 https://www.youtube.com/watch?v=GW3LO_ZByXY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=46

 47- Passing Arrays to Functions and sizeof Operator
 https://www.youtube.com/watch?v=_afeydHJ9Fs&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=49
 48 - Fill Array from Input
 https://www.youtube.com/watch?v=5NdWaGzSNes&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=50 
   g++ arrayVectors.cpp -o array  
  
   */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
  
void print_array(int array[], int size)
{
  std::cout << sizeof(array)<<"  size =  "<< size <<std::endl;  //Print the size of a pointer to an array
  for(int i=0; i<size; i++){ 
      std::cout <<array[i]<< '-';
  }  


}//print_array
main(){
    
  int guesses01[] = {10, 13 , 54, 42, 12 };   
  std::cout << sizeof(guesses01)<< std::endl;  
  int size = sizeof(guesses01)/sizeof(int) ;
  print_array(guesses01, size  );

  guesses01[3] = 300;  
  std::cout << guesses01[3]<< std::endl;    

  
  std::cout <<"size = " << size<< std::endl; 

   
  return 0;   
}//main
   
    
 