
#include <iostream>
#include <vector>

using namespace std;


class Animal {
    public:
    
virtual void sound()
    {
        cout<<"Animal sound\n";
    }

 virtual ~ Animal(){cout<<"animal dtor called \n";}

};

class Dog : public Animal{
    public:
    void sound() override {
        cout<<"Bark\n";
    }

~Dog(){cout<<"dog dtor called\n";}

};

  
class Cat: public Animal{
        public: 
        void sound()
        {
            cout<<"Meow\n";
        }


        ~Cat(){
            cout<<"cat dtor called\n";
        }
};


void sound(Animal *ani)
{
    ani->sound();
}


int main(){

Animal *animal = new Dog();

animal->sound();

sound(animal);

delete(animal);


Animal *animal2 = new Cat();

sound(animal2);

delete (animal2);
return 0;
}