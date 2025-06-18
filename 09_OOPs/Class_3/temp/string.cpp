
#include "string.h"
#include <cstring>


MyString :: MyString(){
    this->length = 0;
    this-> stringh = new char[1];
    stringh[0] = '\0';
}

MyString :: MyString(const char *data){

    this->length = strlen(data);
    this->stringh = new char[length+1];
    strcpy(stringh,data);
}

MyString:: MyString (const MyString&str)
{
    this-> length = str.length;
    this->stringh = new char[length]+1;
    strcpy(stringh,str.stringh);
}

MyString:: ~MyString(){
    delete[] stringh;
}

int MyString:: getLeng() const
{
    return length;
}

bool MyString:: isEmp(){
    return length == 0;
}
    

    // now we need to overload << 
    const char *MyString:: c_str() const
    {
        return stringh;
    }
std::ostream &operator <<(std::ostream &os, const MyString &str)
{
    os << str.c_str();
    return os;
}    


int  MyString:: find(const MyString &substr) const{
    if(substr.length>= length)
    {
        return -1;
    }
    for(int i= 0; i<= length - substr.length; i++)
    {
        int j ;
        for(j = 0; j< substr.length; j++)
        {
            if(stringh[i+j] != substr.stringh[j])
            {
                break;
            }
        }
        if(j == substr.length){   
            return i;
        }
    }
    return -1;
}