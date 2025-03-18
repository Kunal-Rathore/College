
// String is a collection of characters, which has dynamic memory advantage and having various utility functions.


#include <iostream>

using namespace std;


int main() {
 
    // Syntax -
    string st;

    // I/P without spaces -
    cout<<"Enter input- ";
    cin>> st;
    
    // O/P -
    cout<<"String st is- ";
    cout<<st<<endl;

    //string at index -
    cout<<"\nString at index 1 is- "<<st[1]<<endl;
    
    // I/P with spaces -
    cout<<"\nEnter input with spaces- ";
    cin.ignore();
    getline(cin, st);
    
    // O/P -
    cout<<"String is- ";
    cout<<st<<endl;


    return 0;
}