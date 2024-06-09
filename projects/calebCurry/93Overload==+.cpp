 /*   4:30
 C++ Programming Tutorial 93 - Operator Overloading == and +
 https://www.youtube.com/watch?v=ZcmQ5y7QyTc&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=95
      1.   save file
      2.  g++  93Overload==+.cpp  -o ovload  -std=c++11
      3.  ./ovload
 ---------------------------
 */

#include <iostream>
 
 class Position
 {
 private:
    /* data */
 public:
    int x = 10;
    int y = 20;
    Position operator +(Position pos)
    {
        Position new_pos;
        new_pos.x = x +pos.x;
        new_pos.y = y +pos.y;
        return new_pos;
    }
    bool operator == (Position pos)
    {
         if ( x == pos.x  &&    y == pos.y) 
            return true;
        else 
            return false;
    }

 };
 

int main()
{
    Position pos1,pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " "<< pos3.y << std::endl; 


    if (pos1 == pos2)  
    {
      std::cout << "They are the same!\n "<<  std::endl;  
    }else std::cout << "They are not the same!\n "<<  std::endl;
  
    pos2.x = 70;
    if (pos1 == pos2)  
    {
          std::cout << "They are the same!\n "<<  std::endl;  
    }  else 
           std::cout << "They are not the same!\n "<<  std::endl;
    return 0;
}  
 