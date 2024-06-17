  /* 
  * 
  C++ Programming Tutorial 99 - Polymorphism
  https://www.youtube.com/watch?v=_rzEUwv2-eQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=100
  
      0.   cd C:\Users\gilfm\Documents\d\cpp01\projects\calebCurry\mfile> 
      1.   save file
      2.  g++   99main-polym.cpp user.cpp teacher.cpp -o utech  -std=c++11
      3.  ./utech
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
 
  */  

 #include <iostream>
 #include <string>
 #include <iostream>
 #include "user.h" 
 #include "teacher.h"

 main()
 {
    

   Teacher teacher;//User costructer is created and Teacher costructer is created
   User& u =teacher;  
   u.output();//Referes to the defination of 'virtual void output()' in user.h file


 }