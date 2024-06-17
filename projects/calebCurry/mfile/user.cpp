
#include <iostream>
#include <vector> 

#include "user.h"   

 int User::get_user_count()
      {
         return user_count;
      }    
     

 std::string User::get_status() 
    {
         return status;
      }

  void   User::set_status(std::string status)
    {
     if(status =="Gold"||status =="Silver"||status =="Bronze"){
           this->status = status;
        }
        else
        {
           this->status ="No status";
     
        }
        
      }



    User::User()  
    {
      user_count++;
      std::cout << "User created  \n ";
    }

   void User::output(){
      std::cout << "void User::output() I am a user\n";
   } 

   std::ostream& operator << (std::ostream &output, User user); 
   // defintion is outside of the class. 
   // This is not a member function
   
 
 

  
 
 
int User::user_count = 0;// A static varible is initilize outside of 
                          //the class that contain it

std::ostream& operator << (std::ostream &output, User user)
{
   
  output << "first_name =  "   << user.first_name 
         << "\n last_name =  " << user.last_name  
         << "\n status (private data) =  " << user.status<< std::endl;
  return output;  

}