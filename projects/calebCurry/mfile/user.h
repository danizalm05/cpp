


#ifndef  USER_H
    
#define   USER_H  

#include <iostream>
#include <ostream> 

class User 
  {
    //'private': is deafult in class  
      static int user_count;
      std::string  status = "Gold";
    public:
      static int get_user_count();   
      std::string  first_name;
      std::string  last_name;
      void  set_status(std::string status);
      std::string get_status(); 
     virtual void output();
     //void output();
      User();  
      friend std::ostream& operator << (std::ostream &output, User user); 
 
   };
        
 #endif      



   
     
     
    
   
 
 

  
 
 
 