 /*Data types
 https://www.youtube.com/watch?v=4f4BghijE1c&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=19

  18 - char Data Type
 https://www.youtube.com/watch?v=ozhU26jnToQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=20
  19 - Escape Sequences
https://www.youtube.com/watch?v=M8XGnqAVyYM&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=21


 */

#include <iostream>
#include <climits>
using std::cout;

main(){

    short a;
    int b;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout <<"Max short number = " << SHRT_MAX << std::endl ;
    cout <<"Min short number = " << SHRT_MIN << std::endl ;
    cout <<"sizeof(short) = " << sizeof(short) << std::endl ;
    cout <<"sizeof(int) = " << sizeof(int) << std::endl ;
    cout <<"sizeof(long long) = " << sizeof(long long) << std::endl ;



    char x = 'A';
    cout << x <<"  int(x)   " << int(x)<<"    sizeof(x) = " << sizeof(x) << std::endl ;
}
 