
//it is the only function which has no return type

#include <iostream>
#include <vector>

using namespace std;

class Student{
    int id,rollNo,age;
    string name;
    public:
    Student(){
        id = 3;
        rollNo = 11;
        age = 13;
        name = "Shanti";
    }

    Student(int id,int Age, string Name)
    {
        this->id = id;
        age = Age;
        name = Name;
    }

    void display(){
        cout<<id<<endl << rollNo << endl <<age<<endl<<name<<endl;
    }
};

int main(){

Student s1;
s1.display();

Student s2(4,14,"chotaBheem");
s2.display();

return 0;
}