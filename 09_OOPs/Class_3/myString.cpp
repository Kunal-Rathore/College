
#include "myString.h"
#include <cstring>

// definations of all the functions decalred in myString.h

// default ctor
Mystring:: Mystring(){
    data = new char[1];  // data will be array of char of size 1
     length = 0;
     data[0] ='\0'; // null character 
}

// parameterized ctor

Mystring:: Mystring(const char *str)
{
    data = new char[strlen(str)+1];  // data will be char array of 1+ size of str

    length = strlen(str); // strlen is char array function to find length of char array

    strcpy(data,str);
}


// copy ctor

Mystring:: Mystring (const Mystring &obj)
{
    data  = new char[obj.length+1];
    length = obj.length;

    strcpy(data, obj.data);
}


Mystring:: ~Mystring()
{
    delete[] data;
}


int Mystring:: size() const
{
    return length;
}

bool Mystring:: empty() const
{
    return length == 0;
}

const char *Mystring:: c_str() const
{
    return data;
}

 char Mystring:: operator [](int index) const
 {
    if(index>=length)
    {
        return '\0';
    }
    return data[index];
 }

 int Mystring:: find (const Mystring &substr) const
 {
    if(substr.length > length)
    {
        return -1;
    }

    for(int i=0; i<= length - substr.length; i++ )
    {
              int j; 
        for(j = 0; j<substr.length;j++)
        {
            if(data[i+j] !=  substr.data[j])
            {
                break;  
            }
           
        }
           
        if(j == substr.length){
        return i;}
    }
    return -1;
 }

// now we need to overload << 
  std::ostream &operator <<(std::ostream &os, const Mystring &str)
{
    os << str.c_str();
    return os;
}