
// polymorphism of two types compile and runtime

// compiletime in which things resolved during compilation, achieved by function overloading and operator oveloading

// operator_overloading eg

#include <iostream>

using namespace std;


class A{
protected:
int a;
int b;
public:

A(int a, int b)
{
    this->a= a;
    this->b= b;
}

void operator + (const A &obj2)
{
    this->a = this->a + obj2.a;
    this->b = this->b + obj2.b;
}

void getData()
{
    cout<<"A- "<<a<<endl;
    cout<<"B- "<<b<<endl;
}

};



int main(){

    A obj1(2,4);
    A obj2(2,4);

     obj1 + obj2;

obj1.getData();


return 0;
}