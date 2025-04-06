#include <iostream>

using namespace std;

void solve(int *p)  
{
    *p = *p+1;
}
void solve1(int *p)  
{
    p = p+1;
}

void solve2(int *&p)
{
    p = p+1;     // garbage address
}


int main() {
 
    
int a = 5;

int *p = &a;

cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;


solve(p); // call by ref but deref pointer p in function
cout<<"After call by ref but deref pointer p in function\n";

cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;


solve1(p); // call by ref only
cout<<"After call by ref\n";

cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;



solve2(p); // call by value
cout<<"After call by value\n";

cout<<p<<endl;
cout<<&p<<endl;
cout<<*p<<endl;   // garbage value


    return 0;
}