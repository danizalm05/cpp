 /*   5:50
 C++ Programming Tutorial 94 - Overloading Insertion and Extraction Operators
  https://www.youtube.com/watch?v=RQnYiiLtt38&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=96
 
      1.   save file
      2.  g++  94Overload-Inser-Extrac.cpp  -o ovloadInEx  -std=c++11
      3.  ./ovloadInEx
 ---------------------------
 */

#include <iostream>
#include <vector> 
 


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


friend std::ostream& operator << (std::ostream &output, User user);

};
 

std::ostream& operator << (std::ostream &output, User user)
{
   
  output << "first_name =  "   << user.first_name 
         << "\n last_name =  " << user.last_name  
         << "\n last_name =  " << user.last_name<< std::endl;
  return output;  

}

std::istream& operator >> (std::istream &intput, User &user)
{
   std::cout << "Input first and last "<<   std::endl;
   intput >> user.first_name >> user.last_name;
   return intput; 
}

int main()
{
  User user;
  
  //user.first_name = "f1";
  //user.last_name = "l2";
  //user.set_status("Gold") ;
  std::cin >> user;    
  std::cout << user <<   std::endl;
 
  return 0;
}
 