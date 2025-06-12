
// we can copy the values of one object in another using copy constructor one with the compiler predefine copy constructor which makes shallow copy or using user defined which makes deep copy




#include <iostream>
#include <vector>

using namespace std;


class Human{

    int legs;
    int eyes; 
    float hairLength;
    int *ear;

    public:

    // parameterized constructor
    Human (int legs, int eyes, float hairLength){
        
        cout<<endl<<endl<<"Parameterized constructor called"<<endl<<endl;

        this->legs = legs;
        this->eyes = eyes;
        this->hairLength = hairLength;
        this->ear = new int(2); // initialized ear with 2 in heap
    }

// get function
    void getData()
    {
        cout<<"Legs- "<<legs<<endl;
        cout<<"Eyes- "<<eyes<<endl;
        cout<<"HairLength- "<<hairLength<<endl;
    }


    // copy constructor defined by user
     
    Human (const Human &obj)
    {
        this-> legs = obj.legs;
        this-> eyes = obj.eyes;
        this-> hairLength = obj.hairLength;

        cout<<endl <<endl<<"Copy constructor called defined by user"<<endl<<endl;
    }

// as ear is heap allocated so we need to delete that manually when object will be deleted so here distructor came in story

~Human(){
    cout<<endl<<endl<<"Distructor called and also deleting heap allocated memory for ear"<<endl<<endl;

    //deleting ear memory
    delete(ear);
}

};

int main(){

Human h1(2,2,5.2);

h1.getData();

//creating 2nd object and assigning values of object h1 using compiler's copy constructor


{
    Human h2 = h1;   // assigning values of h1 to h2 using copy constructor of compiler (if there is no user defined exists)
h2.getData();


// now assigning using copy constructor from user

}     // h2 object exists till this scope and deleted then by compiler distructor or by user distructor if exists

Human h3 = h1; 

h3.getData();





return 0;
}

// chat-gpt
// So all 3 objects point to the same ear.

// When the first destructor is called → delete ear ✅

// Second destructor → tries to delete ear again ❌ → 💥 segmentation fault!