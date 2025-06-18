#ifndef MYSTRING_H
#define MYSTRING_H


#include <iostream>

class MyString{

    private:
    char *stringh;
    int length;

public:

MyString(); 

MyString(const char *data);

MyString(const MyString&str);


int getLeng() const;

bool isEmp();

~MyString();


const char *c_str() const;

char operator [](int index) const;

int find (const MyString& substr) const;

friend std::ostream &operator <<(std::ostream &os, const MyString &str);
};





#endif