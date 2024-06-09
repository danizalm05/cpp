 /*  
      Tutorial 95 - Friend Functions and Operator Overloading 
      this part start at 4:31
      https://www.youtube.com/watch?v=o-qRv9WjGdE&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=97
   
   
      1.   save file
      2.  g++   95FriendOverload-part2.cpp  -o  friend2  -std=c++11
      3.  ./friend2
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
     
    friend std::ostream& operator << (std::ostream &output, User user); 
   // defintion is outside of the class. 
   // This is not a member function
   
};//class  User
 

  
 
 
int User::user_count = 0;// A static varible is initilize outside of 
                          //the class that contain it

std::ostream& operator << (std::ostream &output, User user)
{
   
  output << "first_name =  "   << user.first_name 
         << "\n last_name =  " << user.last_name  
         << "\n status (private data) =  " << user.status<< std::endl;
  return output;  

}


int main()
{
  User user; 
  user.first_name = "f1";
  user.last_name = "l2";
  std::cout << user <<   std::endl;  //Call a friend  function
  return 0;
}
 