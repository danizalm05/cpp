 /* 
 56 - Refactor Guessing Game to Use Templatized Array
   https://www.youtube.com/watch?v=gZKw7iX7Vj4&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=58   
 
    compile: 
       save file  
       g++  STL Arryguess.cpp -o  STLarrayg  -std=c++11
  
   */

#include <iostream>
#include <climits>
#include <cmath>
 
#include <cstdlib>
#include <vector>
#include <array>

using std::cout;

void print_array(std::array<int, 251> array, int  size  )
{
   
  for(int i=0; i<size; i++){ 
      std::cout <<array[i]<< '\t';
   } 
  std::cout << '\n';
}//print_array



void  play_game(){
  std::array <int, 251> guesses;//int guesses[250];
  int count = 0;
  int random = rand()%251;  

  std::cout <<   random << std::endl;
  std::cout <<   "Guess a number: " << std::endl;
  
  while(true){
    int guess;
    std::cin >> guess;
    guesses[count++] = guess;
    

  
    if(guess == random) {
        std::cout << "You win\n";
        break;
    } else if(guess <  random){ 
         std::cout << "Too low\n";
     }else { 
         std::cout << "Too High\n";
     }
    
  }
  print_array(guesses, count);
}//play_game

main()
{
 play_game();

}