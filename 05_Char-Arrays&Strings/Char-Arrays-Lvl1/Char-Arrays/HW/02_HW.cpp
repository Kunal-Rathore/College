

// Upper to lower char array

#include <iostream>
#include <string.h>

using namespace std;

 void upperTolower(char arr[])
 {
    int index = 0;

    while(arr[index] != '\0')
    {
        if(arr[index] >= 'A' && arr[index]<= 'Z')
        {
               arr[index] = arr[index] - 'A' + 'a';
        }
        index++;
    }
 }



int main() {
 

    char arr[10];

    cout<<"Enter string having upper cases- ";
cin.getline(arr, 100);
    
  upperTolower(arr);

  cout<<"The lower case string is- "<<arr<<endl;


    return 0;
}