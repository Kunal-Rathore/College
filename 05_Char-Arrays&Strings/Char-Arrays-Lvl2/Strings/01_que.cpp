

// que No -> 1047
// Leetcode Link ->  https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

/*
Remove All Adjacent Duplicates In String
The problem is to remove all adjacent duplicates in a given string.

Problem Statement
Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

We repeatedly make duplicate removals on S until we no longer can.

Example
Input: "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible thing, to remove. Always remove the later one in a pair.
After removing "bb" we get we "aaca".
Now, we make another move on "aaca" which becomes "ca".
Constraints
1 <= S.length <= 104
S consists only of lowercase English letters.
*/



#include <iostream>

using namespace std;

string removeAdjacent(string str)
{
    int index =0;
    
string temp ="";

    while(index < str.length())
    { 
        if (temp.empty() || str[index] == temp.back())
        {
            temp.pop_back();
        }
        else{
            temp.push_back(str[index]);
        }

        index++;

    }

    return temp;
}



int main() {
 
    
    string str = "abbaca";

   
    cout<<"String after removing adjacent is- "<< removeAdjacent(str)<<endl;

    return 0;
}




// My approach

/*
#include <iostream>

using namespace std;


void removeAdjacent(string &str)
{
     int index =0;

     while(str[index+1] != '\0')
       {
        if (str[index] == str[index+1] )
        {
            str.erase(index,2);
            index = 0;

       }
       else{
            index++;
    }
}

    }


int main() {

    
string str = "abbaca";

removeAdjacent(str);


cout<<"String after adjacent removal is- "<<str<<endl;
 
    return 0;
}

*/