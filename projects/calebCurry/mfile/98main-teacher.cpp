  /* 
  *https://www.youtube.com/watch?v=_rzEUwv2-eQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=101
  Tutorial 96 - Class Across Files - Multifile Compilation
      https://www.youtube.com/watch?v=nbd7o8iKh9Q&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=98
     
      1.   save file
      2.  g++   98main-teacher.cpp teacher.cpp -o tech  -std=c++11
      3.  ./tech
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
 
 5:00
 
 
 
  */  

 #include <iostream>
 #include <string>

 #include "user.h" 
 #include "teacher.h"

 main()
 {
   User user;
   std::cin >> user; 
 }