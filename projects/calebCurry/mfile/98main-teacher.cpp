  /* 
  * 
  C++ Programming Tutorial 98 - Base Classes and Subclasses Inheritance
  https://www.youtube.com/watch?v=_rzEUwv2-eQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=100
      
      1.   save file
      2.  g++   98main-teacher.cpp user.cpp teacher.cpp -o tech  -std=c++11
      3.  ./tech
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
 
 7:00
 
 
 
  */  

 #include <iostream>
 #include <string>
 #include <iostream>
 #include "user.h" 
 #include "teacher.h"

 main()
 {
   User user;//User costructer is created 
   //std::cin >> user; 

   Teacher teacher;//User costructer is created and Teacher costructer is created
   teacher.first_name="hjhjhj";
   teacher.output(); 



 }