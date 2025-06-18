


// static + passing objects as arguments


#include <iostream>
#include <vector>

using namespace std;


class Student{
    int a,b;
    static int count ; // default 0

    public:
    Student(){
        this->a = 0;
        this->b = 0;
     
    }
    Student(int a, int b)
    {
        this->a= a;
        this->b= b;
      
    }

    void getData()
    {
        cout<<"a- "<<a<< endl<<"b- "<<b<<endl<< "count- "<<count<<endl;
       
    }
    void addAll(const Student &s1,const Student &s2)
    {
            a = s1.a + s2.a;
            b = s1.b + s2.b;
    }
    static void increaseCount(){
        count++;
    }
};

int Student:: count = 1;


int main(){

Student s1(1,2);
Student s2(2,1);

s1.getData();
Student::increaseCount();
s2.getData();
Student::increaseCount();

Student s3;
s3.addAll(s1,s2);

s3.getData();

return 0;
}