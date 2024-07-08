 /* 79 -    Creating a Function Template
  https://www.youtube.com/watch?v=-PDAONh7A4c&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=81 

    80 -    Overloading Function Templates
 https://www.youtube.com/watch?v=7-iUQXMSrc4&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=82
 
 
      1.   save file
      2.  g++  79FuncTemplat.cpp -o  templ  -std=c++11
      3.  ./templ
 
 01:50
  */

#include <iostream>
#include <string>
 
template <typename T>

void swap(T &a, T &b){
 T temp = a;
 a=b;
 b= temp;

} 
 
 
//This Template is to  swap data types like arrays
template <typename T> 
void swap(T a[], T b[], int size){
  for(int i = 0; i < size; i++){
     T temp = a[i];
     a[i] = b[i];
     b[i] = temp;
  }

}  



main()
{
 int a = 3 ;
 int b = 20;
 
 swap(a,b);
 std::cout <<"a = " <<a << "  b = " <<b << "\n"; 

 std::string first_name = "Cal";
 std::string last_name = "urr";
 swap(first_name,last_name);
 std::cout <<"first_name = " <<first_name << "  last_name = " 
 <<last_name<<std::endl  << "\n"; 


 //Swap array  demo
 int nines[] = {9,9,9,9,9,9};
 int ones[] = {1,1,1,1,1,1};


 for( int i = 0; i <6; i++){
      std::cout << nines[i] << "  " << ones[i] << "\t";
      std::cout <<"\n\n";
 }

 swap(nines,ones,6);

 for( int i = 0; i <6; i++){
      std::cout << nines[i] << "  " << ones[i] << "\t";
      std::cout <<"\n\n";
 }

 return  0;
} 