#include <iostream>
#include <string.h>

using namespace std;

int findLength (char arr[], int size)
{
    int length =0;
    for(int i = 0; i<size; i++)
    {
        if(arr[i]!= '\0')
        {
                 length++;
        }
        else{
            break;
        }
    }
    return length;
}



int main() {
 
    char arr[30];
cout<<"Enter the string: ";
    cin.getline(arr,30);

    int len = findLength(arr,30);
    cout<<"Length is- "<<len<<endl; // finding length of string using function
    
    cout<<"Length using built in function- "<< strlen(arr)<<endl;   //need to include string.h 
    
    return 0;

}