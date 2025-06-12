

// print permutation of string

#include <iostream>
#include <vector>

using namespace std;

void printPermutation(string &str,int i)
{
    if(i >= str.length())
    {
        cout<< str<<"  ";
        return;
    }

    for(int j=i; j<str.length(); j++)
    {
        // inclusion
      swap(str[i], str[j]);

        // recusion
        printPermutation(str, i+1);

        // backtrack
       swap(str[i], str[j]);
    }
    return;
}

int main(){

string str = "abc";
printPermutation(str,0);

return 0;
}