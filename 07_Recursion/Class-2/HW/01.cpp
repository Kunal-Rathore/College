

// for loop fibonacci

#include <iostream>

using namespace std;


int main() {
 
    int n = 6;

    int a = 0;
    int b = 1;

    if(n == 1)
    {
        cout<<a;
        return 0;
    }
    int next;
   
    for(int i= 1;i< n; i++)
        {
          next = a+b;
          a = b;
          b = next;
        }
    
        cout<<next;

    return 0;
}