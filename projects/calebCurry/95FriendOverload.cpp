 /*  
      Tutorial 95 - Friend Functions and Operator Overloading 
      4:31
      https://www.youtube.com/watch?v=o-qRv9WjGdE&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=97
   
   
      1.   save file
      2.  g++  95FriendOverload.cpp  -o  friend  -std=c++11
      3.  ./friend
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */

#include <iostream>
#include <vector> 
 //Class defination
class User 
  {
    //'private': is deafult in class  
      static int user_count;
      std::string  status = "Gold";
      
 public:
      static int get_user_count()
      {
         return user_count;
      }    
      std::string  first_name;
      std::string  last_name;

      std::string get_status()  {
         return status;
      }
      void   set_status(std::string status)  {
        if(status =="Gold"||status =="Silver"||status =="Bronze"){
           this->status = status;
        }
        else
        {
           this->status ="No status";
     
        }
        
      }



    User()  
    {
      user_count++;
      //std::cout << "Constructor 1\n ";
    }
     
   friend void output_status(User user);
   // defintion will be outside of the class. 
   // This is not a member function
   
};//class  User
 

  
 
 
int User::user_count = 0;// A static varible is initilize outside of 
                          //the class that contain it


void output_status(User user)
{
    std::cout  << user.status;//user.status is private but because
}   // output_status is a friend function we can access private variable
   
int main()
{
  User user; 
  
   output_status( user); //Call a friend funtion to access private data
  return 0;
}
 