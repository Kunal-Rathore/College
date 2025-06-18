
// a default ctor makes deep copy means it shares same memory address of data defined dynnamically
// it also deletes the data when one object is deleted

#include <iostream>
#include <vector>

using namespace std;

class abc{
    public:
    int a;
    int *b;
    abc(int a,int b)
    {
        this->a = a;
        this->b = new int(b);
    }

 //compiler default deep copy ctor
  abc(const abc& obj)
 {
          a = obj.a;
          b = obj.b; // which is wrong way
 }
 



// shallow copy creates different heap allocation for dynamic data
/*  abc(const abc & obj)
 {
    a = obj.a;
    b = new int(*obj.b);
 }
 */

 void getData()
 {
    cout<<"a- "<< a<<endl<<"*b- "<<b<<endl<<"b- "<<*(b)<<endl;
 }

 ~abc(){
    delete b;
 }
};


int main(){

/* abc obj1(2,3);

abc obj2 = obj1;

obj1.getData();
obj2.getData();

*obj2.b =  5;
cout<<endl<<endl;
obj1.getData();

obj2.getData(); */

abc *a = new abc(1,2);
abc b =*a;

delete a;
b.getData();

return 0;
}