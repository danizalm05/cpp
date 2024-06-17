  /* 
  * https://www.youtube.com/watch?v=_rzEUwv2-eQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=101
      1.   save file
      2.  g++   98main-teacher.cpp teacher.cpp -o tech  -std=c++11
      3.  ./tech
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
 */ 
 //
 #include "user.h" 
 #include "teacher.h" 


void Teacher::output()
{
  std::cout << "Teacher::output()" ; 
  std::cout << "first_name = "<< first_name ;

}

 Teacher::Teacher()
 {
  std::cout << "Teacher created  \n ";
 }