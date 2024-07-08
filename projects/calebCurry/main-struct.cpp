 /*  
       --------------   Class    ---------------
   83 - Creating a Struct
   https://www.youtube.com/watch?v=E_aVsBLlvpQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=85
   85 - Creating a Class
   https://www.youtube.com/watch?v=fA_nq_mMfig&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=87

   86 - Working with Objects
   https://www.youtube.com/watch?v=cjpIPUaEbRM&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=88
   87 - Intro To Constructors
   https://www.youtube.com/watch?v=b6HEYgZg0Ss&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=89

   88 - Constructors and Destructors
    https://www.youtube.com/watch?v=wyVAajK7QzQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=90
   
   90 - Getters and Setters
    https://www.youtube.com/watch?v=6Q0zrL6ys6U&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=92
      1.   save file
      2.  g++  main-struct.cpp  -o  crtruc  -std=c++11
      3.  ./crtruc
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



     //Constructor 1
    User()  
    {
      user_count++;
      std::cout << "Constructor 1\n ";
    }
     //Constructor 2
    User(std::string  first_name, std::string  last_name,
                  std::string status)  
    {
       user_count++;
       this->first_name = first_name;
       this->last_name = last_name;
       this->status = status;
    }
  
  ~User(){
     user_count--; 
     std::cout << "De constructor ";
  }  
  
  };
 



 //struct defination
  struct User01
  {
      std::string  first_name;
      std::string  last_name;
       

   std::string get_status()
      {
        return status;
      }
      private:
          std::string  status = "struct defination";
  };
 
 int User::user_count = 0;// A static varible is initilize outside of 
                          //the class that contain it
int add_user_if_not_exists(std::vector<User> &users, User user)
{
   
   std::cout << "users.size() = " <<users.size() << std::endl;
   for (int i =0; i < users.size(); i++)
     {
      if(  users[i].first_name == user.first_name  &&
           users[i].last_name  == user.last_name       )
        {
         
         std::cout << "user exists   " <<   std::endl;
         return i; 
        } 
     }
     
  users.push_back(user);  
  return   users.size() -1;
}

int main()
{
  User01 me;//struct defination
  
  me.first_name = "strrr";
  me.last_name = "bbstrrr";
  //me.status = "strt";
  std::cout << "status = " << me.get_status() << std::endl;
 
 
 User  user;//class defination
  
  user.first_name = "aa";
  user.last_name = "bb";
  //me.status = "strt";
  std::cout << "status = " << user.get_status() << std::endl;
 
 //Add a user to vector method 1
  std::vector<User> users;
  users.push_back(user);
  std::cout <<"method 1 accrss to vector="<< users[0].first_name << std::endl;
 //Add a user to vector method 2 
 /*
  users.push_back(User());  //Call  the constructor  directly
  //user 1 .first_name is blank
  std::cout << "method 2 accrss to vector  = " << users[1].first_name << std::endl;
  */
  User  user11,user12,user13;
  //How many User class where  created
  std::cout << "------user count = " <<  User::get_user_count() << std::endl;
  
  user11.first_name = "aa";
  user11.last_name = "bb";
  
  user12.first_name = "cc";
  user12.last_name = "dd";
  user13.first_name = "ee";
  user13.last_name = "ff";
  
  users.push_back(user11);
  users.push_back(user12);
  users.push_back(user13); 
 
  User  user111, ussssr;// this is the same as  user13 so it won't be added
  std::cout << "------user count = " <<  User::get_user_count() << std::endl;
  ussssr.~User();
  std::cout << "------user count = " <<  User::get_user_count() << std::endl;
 
  user111.first_name = "ee";
  user111.last_name = "ff";


  std::cout << add_user_if_not_exists(users,user111) << std::endl;
 

  User user02("domi","yuom","silver");// using the 2'nd  constractor 
  std::cout << user02.first_name << std::endl;
  std::cout << user02.get_status() << std::endl;
  user02.set_status("Tacos");
  std::cout << user02.get_status() << std::endl;

  
  return 0;
}
 