

#include <iostream>
#include <vector>

using namespace std;

class Students{


string gf;
void chatting(){
    cout<<"chatting chatting \n";
}

    public:
    
    string name;
    int id, age;
    void display()
    {
        cout<< id<<" "<<age<<" "<<name;
    }
};

int main(){

Students s1;

s1.id = 4;
s1.age = 14, s1.name = "kunal";
s1.display();


Students chotaBheem;

chotaBheem.id=43;
chotaBheem.age = 12;
chotaBheem.name = "chotaBheem";
cout<<endl;
chotaBheem.display();

return 0;
}