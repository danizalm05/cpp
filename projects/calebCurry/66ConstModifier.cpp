/* 
66 - Const Modifier
https://www.youtube.com/watch?v=4FKxT1Nc_Os&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=68
      compile:  
         cd   calebCurry
         g++  66ConstModifier.cpp -o    ConMdf.exe  -std=c++11
        run :  ./ConMdf
   
 */

 #include <iostream>
 #include <vector>
 
void print_array(const int data[],int siza) {
   for(int i = 0 ;i< siza; i++){
    // A command  as data[i]++; will create an error massage  since it is a CONST
     //data[i]++;
     std::cout << data[i]<< "\t";
     }
   std::cout <<"\n";
     
}

 int main(){
    
    int data[] = {1,2,3};
    print_array(data,3);
    std::cout << data[0]<< std::endl;
    return 0;
 
 }