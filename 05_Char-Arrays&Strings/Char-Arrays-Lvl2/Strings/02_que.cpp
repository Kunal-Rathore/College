

// que No. -> 1910

//Leet code Link -> https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

/*
Remove All Occurrences of a Substring
The problem is to remove all occurrences of a substring from a given string.

Problem Statement
Given two strings s and part, return the string after removing all occurrences of part from s.

Example
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation:
Remove the first occurrence of "abc" from "daabcbaabcbc" to get "dabaabcbc".
Remove the second occurrence of "abc" from "dabaabcbc" to get "dab".
Constraints
1 <= s.length <= 1000
1 <= part.length <= 1000
s and part consists only of lowercase English letters.
Example 2
Input: s = "axxxxyyyyaxx", part = "xy"
Output: `"ay"
*/



#include <iostream>

using namespace std;

string removee(string str, string part)
{  


    while(str.find(part) != string ::npos)
    {
          //means part string exists in the str string

          str.erase(str.find(part), part.length());   

    }
   

    return str;
}



int main() {
 
    
    string str = "abbcacaabca";
    string part ="bca";

    cout<<"String after removing part is- "<< removee(str, part)<<endl;

    return 0;
}


