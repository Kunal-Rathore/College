

// allocating object of student in heap

#include <iostream>
#include <vector>

using namespace std;

class Student{
    public:
    int id,rollNo,age;
    string name;
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

Student *s2 = new Student();

Student *s3 = new Student(4,21,"Tiger");

cout<< s3->name << endl;
cout<< (*s3).name<< endl;
 
Student s1;
cout<<s1.name <<endl;

delete s2, s3;

return 0;
}