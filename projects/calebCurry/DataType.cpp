 /*Data types
 https://www.youtube.com/watch?v=4f4BghijE1c&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=19

  18 - char Data Type
 https://www.youtube.com/watch?v=ozhU26jnToQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=20
  19 - Escape Sequences
https://www.youtube.com/watch?v=M8XGnqAVyYM&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=21


C++ Programming Tutorial 20 - bool Data Type
https://www.youtube.com/watch?v=3h5wt2rUZHw&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=22

C++ Programming Tutorial 21 - Floating Point Numbers
https://www.youtube.com/watch?v=QsICXFKs9uo&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=23


 */

#include <iostream>
#include <climits>
#include <float.h>

using std::cout;

main(){

    short a;
    int b;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout <<"    Max short number = " << SHRT_MAX << std::endl ;
    cout <<"Min short number = " << SHRT_MIN << std::endl ;
    cout <<"sizeof(short) = " << sizeof(short) << std::endl ;
    cout <<"sizeof(int) = " << sizeof(int) << std::endl ;
    cout <<"sizeof(long long) = " << sizeof(long long) << std::endl ;



    char x = 'A';
    cout << x <<"  int(x)   " << int(x)<<"    sizeof(x) = " << sizeof(x) << std::endl ;
     cout << "Hello\tWorld\n ";
  bool pizza_is_good = true;
 
  //Floating Point Numbers
  float aaaaaa = 10.0 /3;
  double bvvb = 7.7e4 ; // 77000
  long double ccc;

   cout << aaaaaa << '\n';
  cout << bvvb << '\n';

  cout << FLT_DIG << std::endl;
  cout << DBL_DIG << std::endl;
}  
 