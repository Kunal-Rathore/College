

#include <iostream>
#include <vector>

using namespace std;

class Complex{
    int a,b;
    public:
    Complex(){
        a= 0;
        b = 0;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void getData(){
        cout<<"A- "<<a<<endl;
        cout<<"B- "<<b<<endl;
    }
    friend Complex addAll(const Complex &c1, const Complex &c2);
};


 Complex addAll(const Complex &c1, const Complex &c2){
    Complex c3;
    c3.a  = c1.a + c2.a;
    c3.b  = c1.b + c2.b;
return c3;
}



int main(){
            Complex c1(2,2);
            Complex c2(1,1);
            Complex c3 = addAll(c1,c2);
            c3.getData();
            
return 0;
}