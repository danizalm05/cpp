 /* 
 49 - Using an Array to Keep Track of Guesses
 https://www.youtube.com/watch?v=aAMIig6zg0A&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=51
   g++ guess.cpp -o guess  
4:00  
   */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int size)
{
  std::cout <<"sizeof(array) =  " << sizeof(array)<<"  size =  "<< size <<std::endl;  //Print the size of a pointer to an array
  for(int i=0; i<size; i++){ 
      std::cout <<array[i]<< '\t';
   } 
  std::cout << '\n';
}//print_array



void  play_game(){
  int guesses[250];
  int guess_count = 0;
  int random = rand()%251;
  std::cout <<   random << std::endl;
  std::cout <<   "Guess a number: " << std::endl;
  
  while(true){
    int guess;
    std::cin >> guess;
    guesses[ guess_count++] = guess;
    if(guess == random) {
        std::cout << "You win\n";
        break;
    } else if(guess <  random){ 
         std::cout << "Too low\n";
     }else { 
         std::cout << "Too High\n";
     }
    
  }
  print_array(guesses,   guess_count);
}//play_game

main()
{
 play_game();

}