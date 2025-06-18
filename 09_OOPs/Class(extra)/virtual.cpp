

// each class will have VTable created during compilation and points the corresponding data and methods
// it all resolved using VPtr 

// we cannot create vctor (virtual constructor), there is no VTable during execution of constructor so no VPtr theresfore ctor can never be virtual

// virtual table constructor kae baad picture mae ata hae

// dtor can be virtual -> it is necessary to handle distruction  (base kae dtor ko hamesha virtual bana do)


#include <iostream>
#include <vector>
#include <vector>

using namespace std;


class Base{
    public:

    Base(){cout<<"base ctor called \n";}
    
    virtual    ~Base(){cout<<"base dtor called\n";}
};

class Derived: public Base{
    int *a;
    public:
    Derived(){
        a = new int[1000];
    cout<<"Derived ctor called\n";
    }

~Derived(){
    delete[] a;
    cout<<"Derived dtor called\n";
}

};


int main(){

Base *a = new Derived();
delete a;   

return 0;
}