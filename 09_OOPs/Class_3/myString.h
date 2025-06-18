#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class Mystring{

private:

char *data;  // pointer to character data
int length;  // size of string

public:

// default ctor

Mystring();

//parameterized ctor
Mystring(const char *str); // initialized later

// copy ctor

Mystring (const Mystring &other);

// destructor
~Mystring();


int size() const; // means data will not change in the function


bool empty()const; 

const char *c_str() const;

char operator [](int index) const;

int find(const Mystring &substr) const;


friend std::ostream &operator <<(std::ostream &os, const Mystring &str);

};



#endif