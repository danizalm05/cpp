/* 
Tutorial 62 - Saving High Scores to File
 https://www.youtube.com/watch?v=c4YSBHZ2gS4&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=64
        
                   
      compile:  
         cd   calebCurry
         g++  62 SavingScores2File.cpp -o    SavH.exe  -std=c++11
        run :  ./ SavH
     4:30 
 */

#include <iostream>
#include <climits>
#include <cmath>
 #include <cstdlib>
#include <vector>
#include <array>
#include <fstream>
using std::cout;

void print_vector(std::vector<int> vector)
{
   
  for(int i=0; i<vector.size(); i++){ 
      std::cout <<vector[i]<< '\t';
   } 
  std::cout << '\n';
}//print_array



void  play_game(){
  std::vector <int> guesses; 
  int count = 0;
  int random = rand()%251;  

  std::cout <<   random << std::endl;
  std::cout <<   "Guess a number: " << std::endl;
  
  while(true){
    int guess;
    std::cin >> guess;
    count ++;
    guesses.push_back(guess);

   
    if(guess == random) {
        std::cout << "You win\n";
        break;
    } else if(guess <  random){ 
         std::cout << "Too low\n";
     }else { 
         std::cout << "Too High\n";
     }
    
  }//while
  // The game is over now we check if this is the best score
  std::ifstream input("best_score.txt"); //open  input file
  if(!input.is_open()){
     std::cout << "Unable to read file\n";
     return;
  }
  
  int best_score;
  input >> best_score;
  std::ofstream output("best_score.txt");//open  output file
  if(!output.is_open()){
     std::cout << "Unable to open file\n";
     return;
  }
  std::cout << "best_score = " << best_score <<"\n";
  
  std::cout << "count = " << count <<"\n"; 
  if(count < best_score){
       output << count;

  }else {
      output << best_score;


  }
   
  print_vector(guesses);
}//play_game

main()
{
 //std::ifstream file("best_score.txt"); //open  file 
 play_game();

}