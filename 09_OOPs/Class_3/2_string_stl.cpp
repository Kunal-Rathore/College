


// g++ -c myString.cpp
// g++ -c 2_string_stl.cpp  
// g++ -o 2_string_stl myString.o 2_string_stl.o
// ./2_string_stl      


//  g++ -c 2_string_stl.cpp && g++ -c myString.cpp && g++ -o 2_string_stl 2_string_stl.o myString.o



#include <iostream>
#include <vector>
#include "myString.h"

using namespace std;


int main(){

Mystring s("myKunal");

cout<<s<<endl;
cout<< s[0]<<endl;

cout<<s.size()<<endl;


cout<<s.find("yK");

return 0;
}


// erase function
// assignment operator overloading
// append
// push or pop