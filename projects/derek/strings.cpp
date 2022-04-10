//https://www.w3schools.com/cpp/
#include <iostream>
 using namespace std;

int main() {
  
std::string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
fullName = firstName.append("  lastName    ====");
std::cout << fullName;
std::cout << "\n The length of the txt string {`$fullName`} is: " << fullName.length();
cout <<"\nFirst char = "<< fullName[0];
 

cout << "\n Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
return 0;  
 
} 