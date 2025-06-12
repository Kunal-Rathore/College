

// here we use-

// constructors, destructor, getter, setter, inheritance, {virtural inheritance and types (may be in next note)}

#include <iostream>
#include <vector>

using namespace std;

class Human {
    int legs;
    int eyes;
    float hairLength;
    int *ear;
    bool isMarried;

public:
    Human(int legs, int eyes, float hairLength) {
        cout << endl << endl << "Parameterized constructor called" << endl << endl;
        this->legs = legs;
        this->eyes = eyes;
        this->hairLength = hairLength;
        this->ear = new int(2);
    }

    void getData() {
        cout << "Legs- " << legs << endl;
        cout << "Eyes- " << eyes << endl;
        cout << "HairLength- " << hairLength << endl;
    }

    void setData(bool isMarried)
    {
        this-> isMarried = isMarried;
    }
    
    void getIsMarried()
    {
        cout<<endl<<"Is married- "<<isMarried<<endl;
    }

    Human(const Human &obj) {
        this->legs = obj.legs;
        this->eyes = obj.eyes;
        this->hairLength = obj.hairLength;

        cout << endl << endl << "Copy constructor called defined by user" << endl << endl;
    }

    ~Human() {
        cout << endl << endl << "Distructor called and also deleting heap allocated memory for ear" << endl << endl;
    }
};


// inheritance -> using data and methods or properties of one class in another

class Male : public Human{
    public:
    Male(int legs, int eyes,float hairLength ): Human(legs,eyes, hairLength){cout<<endl<<"constructor of male class called"<<endl;}

    ~Male(){
cout<<endl<<"Distructor of male class called"<<endl;
    }
};



int main() {
    Human h1(2, 2, 5.2);
    h1.getData();

    {
        Human h2 = h1;
        h2.getData();
        h2.setData(true);
    h2.getIsMarried();
    }
 
    Male m1(2,5,9.0);
    m1.getData();


    return 0;
}

// Why distructor calling 4 times for three objects
// h2 → 1

// h1 → 2

// m1 → Male destructor → 3, and its Human base → 4 ✅