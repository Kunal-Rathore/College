
//  g++ -c  string.cpp && g++ -c 1.cpp && g++ -o 1 1.o string.o

// ./1

#include <iostream>
#include "string.h"

using namespace std;

int main()
{
    MyString k("strings");
    cout<<k.getLeng()<<endl;
    cout<<k<<endl;
    
    cout<<k.isEmp()<<endl;
  MyString s("ing");
cout<< k.find(s);
}