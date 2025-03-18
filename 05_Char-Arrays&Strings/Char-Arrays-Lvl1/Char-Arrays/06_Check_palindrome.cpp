#include <iostream>
#include <string.h>

using namespace std;

bool checkPalindrome (char arr[])
{
    int i = 0;
    int j = strlen(arr)-1;
    
    while(i<j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
         }
        else
        {
            return false;
        }
      
    }

    return true;
}


int main() {
 char arr[40];
 cout<<"Enter a word to check Palindrome or not- ";
 cin.getline(arr,40);

 
    bool check = checkPalindrome(arr);

    if(check)
    {
        cout<<"Valid Palindrome\n";
    }

    else{
        cout<<"Invalid Palindrome\n";
    }
    return 0;
}

// Time -> O(L)