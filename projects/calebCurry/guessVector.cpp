 /* 
 53 - Refactor Guessing Game to Use Vectors
 https://www.youtube.com/watch?v=LXd9W5F58Cs&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=55  
  
    g++ guess.cpp -o guess  
4:00  
   */

#include <iostream>
#include <climits>
#include <cmath>
 
#include <cstdlib>
#include <vector>

using std::cout;

void print_vector(std::vector<int> vector )
{
   
  for(int i=0; i<vector.size(); i++){ 
      std::cout <<vector[i]<< '\t';
   } 
  std::cout << '\n';
}//print_array



void  play_game(){
  std::vector <int> guesses;//int guesses[250];
  int guess_count = 0;
  
  int random = rand()%251;  
  std::cout <<   random << std::endl;
  std::cout <<   "Guess a number: " << std::endl;
  
  while(true){
    int guess;
    std::cin >> guess;
    guesses.push_back(guess);
    if(guess == random) {
        std::cout << "You win\n";
        break;
    } else if(guess <  random){ 
         std::cout << "Too low\n";
     }else { 
         std::cout << "Too High\n";
     }
    
  }
  print_vector(guesses);
}//play_game

main()
{
 play_game();

}