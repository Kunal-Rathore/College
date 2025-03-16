

#include <iostream>
#include <string.h>

using namespace std;

void convert_to_space(char arr[])
{
    int index = 0;
    while(arr [index] != '\0')
    {
        if(arr[index]  == '@')
        {
            arr[index] = ' ';
        }

               index++;
    }
}

int main() {
 
   char arr[100];    
   cout<<"Enter string with @- ";kk
   cin.getline(arr,100);

   convert_to_space(arr);
   cout<<"String after @ to space is- "<<arr<<endl;


    return 0;
}

// Time ->  O(L)