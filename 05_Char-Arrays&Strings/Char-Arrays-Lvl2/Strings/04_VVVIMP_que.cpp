

// MOST IMP

// que no -> 647
// Leetcode Link -> https://leetcode.com/problems/palindromic-substrings/description/

/*

Palindromic Substrings
The problem is to count the number of palindromic substrings in a given string.

Problem Statement
Given a string, your task is to count how many palindromic substrings in this string. The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.

Example 1
Input: "abc"
Output: 3
Explanation:
Three palindromic substrings: "a", "b", "c".
Example 2
Input: "aaa"
Output: 6
Explanation:
Six palindromic substrings: "a", "a", "a", "aa", "aa", "aaa".
Constraints
1 <= s.length <= 1000
s consists only of lowercase English letters.

*/



#include <iostream>

using namespace std;

int checkAndExpand(string str, int i, int j)
{
    int count =0;
    while(i>=0 && j < str.length() && str[i] == str[j])
    {
          count++;
          i--; j++;
    }

    return count;
}



int countSubPalindrome(string str)
{
       
    int ans =0;
    for(int i =0; i< str.length(); i++)
    {
        int oddCount = checkAndExpand(str, i,i); 

        int evenCount = checkAndExpand(str, i , i+1);

        ans += oddCount+ evenCount;
    }


    return ans;

}


int main() {
 

    
    string str = "aaa";

    int count = countSubPalindrome(str);


    cout<<"The no. of substring which are palindrome are- "<< count<<endl;
    
    return 0;
}