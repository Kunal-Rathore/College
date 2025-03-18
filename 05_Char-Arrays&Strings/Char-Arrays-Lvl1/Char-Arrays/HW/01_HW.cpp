// Length of char array using while loop


#include <iostream>

using namespace std;


int findLength(char arr[])
{
    int index =0;
    while(arr[index] != '\0' )
    {
        index++;
    }

    return index;
}


int main() {
        
    
char arr[10];

cout<<"Enter the string- ";
cin>>arr;
    

int Len = findLength (arr);

cout<<"The length of string using while loop is- "<<Len<<endl;

    return 0;
}