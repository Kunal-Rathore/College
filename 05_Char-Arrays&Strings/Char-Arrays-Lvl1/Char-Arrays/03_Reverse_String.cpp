#include <iostream>
#include <string.h>

using namespace std;

void reverseString (char arr[])
{
    int index = 0;
    int j = strlen(arr)-1;
    while(index<j)
    {
        swap(arr[index],arr[j]);
        index++;
        j --;
    }
}

int main() {
 
    char arr[100];

    cout<<"Enter string- ";
    cin.getline(arr,100);

  reverseString(arr);

   cout<<"String after reverse is- ";
   cout<< arr<<endl;

    return 0;
}

// Time -> O(L)