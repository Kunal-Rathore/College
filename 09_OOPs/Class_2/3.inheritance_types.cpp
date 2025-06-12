

// types of inheritance and modes


#include <iostream>
#include <vector>

using namespace std;

class LivingBeing{
    
    protected:

    int legs, eyes;
    void eat() {
        cout<<endl<<"eat"<<endl;
    }
    void sleep(){
        cout<<endl<<"sleep"<<endl;
    }

    public:
    LivingBeing (int legs, int eyes)
    {
        this->legs= legs;
        this->eyes = eyes;
    }

  void  getData()
    {
        cout << "Legs- " << legs << endl;
        cout << "Eyes- " << eyes << endl;
    }

};


// single inheritance we saw in 2_complete_class.cpp

// now hierrachical inheritance that will cover single, multiple and multilevel inheritance and also see ambiguity and 2 resolving techniques

// using virtual so no ambiguity accur (see copy notes)

class Human : virtual protected LivingBeing{

    int hands;
    public:

    Human( int legs, int eyes,int hands):LivingBeing(legs,eyes)
    {
        this->hands = hands;
    }

    void getData1(){
        
        cout << "Hands- " <<hands << endl;
    }

    void getBehaviour1()
    {
        // function to access protect methods of parent class
        eat();
        sleep();
    }

    void write()
    {
        cout<<endl<<"write"<<endl;
    }
    

    ~Human(){
    cout<<endl<<"dtor called"<<endl;
    }
    
};


    class Animal: virtual protected LivingBeing{
        
        int wings;
        public:
        Animal( int legs, int eyes,int wings):LivingBeing(legs,eyes)
        {
            this->wings = wings;
        }
        
        void getData2(){
            cout << "Wings- " <<wings << endl;
        }

        void getBehaviour2()
        {
            // function to access protect methods of parent class
            eat();
            sleep();
        }
        
        void fly()
        {
            cout<<endl<<"fly"<<endl;
        }
    };
    
    


// now creating child class form two sub parents in which each has human class functions and data but inherit in next child class only one due to virtual inherit

class Monster: public Human, public Animal{

    public:
    // here we used livingbeing class to initalize due to rules of virtual inheritance
    Monster(int legs, int eyes, int hands, int wings):LivingBeing(legs,eyes),Human(legs,eyes,hands),Animal(legs,eyes,wings){}

    void getData3(){

        cout << "Legs- " << legs << endl;
        cout << "Eyes- " << eyes << endl;
        getData1();
        getData2();

    }
};




    int main(){
 {
           
   Human h1(2,2,2);
        
   h1.getData1();
h1.getBehaviour1();


cout<<endl<<endl;

Animal a1(2,4,5);
a1.getData2();
a1.getBehaviour2();
 }

cout<<endl<<endl;

Monster m1(4,4,6,2);

m1.getData3();



return 0;
}