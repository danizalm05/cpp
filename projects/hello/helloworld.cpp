/*
How to Download and Install C Cpp Toolset ( gcc g++ gdb )
 in Windows 10 using mingw-w64 and msys2
https://www.youtube.com/watch?v=0HD0pqVtsmw&t=0s

https://code.visualstudio.com/docs/cpp/config-mingw
1. Terminal > Configure Default Build Task. 
2. Choose g++.exe build active file    //Create a tasks.json file 
3.Ctrl+Shift+B or from the Terminal main menu choose Run Build Task.
4. Create a new terminal using the + button
5. Run  the  program './program name"

Debug
 1. Run > Add Configuration... and then choose C++ (GDB/LLDB).
 2. Choose g++.exe build and debug active file.

 Start a debugging session#

  1.Go back to helloworld.cpp so that it is the active file.
  2 Run > Start Debugging.   F5

*/
//Learn modern C++ 20 programming in this comprehensive course
//https://www.youtube.com/watch?v=8jLOx1hD3_o&t=40s    01:43:00




#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
 
    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;
}