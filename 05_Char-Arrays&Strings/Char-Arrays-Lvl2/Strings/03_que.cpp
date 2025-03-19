


// leetcode n0. ->680

//Link -> https://leetcode.com/problems/valid-palindrome-ii/description/

/*
Valid Palindrome II
The problem is to determine if a given string can be made into a palindrome by removing at most one character.

Problem Statement
Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.

Example 1
Input: "aba"
Output: true
Explanation:
The string is already a palindrome.
Example 2
Input: "abca"
Output: true
Explanation:
You can delete the character 'b' or 'c' to get the string "aca", which is a palindrome.
Example 3
Input: "abc"
Output: false
Explanation:
You cannot make the string a palindrome by removing one character.
Constraints
1 <= s.length <= 10^5
s consists only of lowercase English letters.

*/


#include <iostream>

using namespace std;

bool checkremovingString(string str, int i, int j)
{
    while(i<j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else {
            return false;
    }
}

return true;
}

bool checkPalindrome(string str)
{  

    int i =0;
    int j = str.length()-1;

    while(i<j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else{
            bool ans1 = checkremovingString(str, i+1, j);
            bool ans2 = checkremovingString (str,i, j-1);


            return ans1 || ans2;
        }
    }
return true;

}



int main() {
 
    
    string str = "BABBA";

   bool check = checkPalindrome(str);

if(check)
{
    cout<<"Is palindrome\n";

}
else{
    cout<<"Not palindrome\n";
}

    return 0;
}