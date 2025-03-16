

#include <iostream>
#include <string.h>

using namespace std;

void lower_to_upper( char arr[])
{
    int index = 0;
    
    while(arr[index] !='\0')
    {
        if(arr[index] >= 'a'  && arr[index] <= 'z')
        {
            arr[index] = arr[index] - 'a' + 'A';
        }

        index++;
    }
}


int main() {
 

    char arr[100];
    cout<< "Enter a string having lower case- ";
    
    cin.getline(arr,100);

    lower_to_upper(arr);

    cout<<"String in Upper case is- ";
    cout<< arr << endl;
    

    return 0;
}

// Time -> O(L)