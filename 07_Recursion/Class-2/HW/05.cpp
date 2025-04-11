

// babbar  <= string and target = a store index of target in vector


#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> findIndex(string s, char target,int index)
{
    vector <int> vec;
    vector <int> ans;
    if(s[index] == '\0')
    {
        return vec;
    }
    if(s[index]== target)
    {
        vec.push_back(index);
    }

    ans =  findIndex(s,target,index+1);
    
    for(auto i: vec)
    {
        ans.push_back(i);
    }
    return ans;
}

int main() {
 
    string s = "babbar";
    char target  = 'a';

    vector <int> targetIndex = findIndex(s,target,0);

    for(int i: targetIndex)
    {
        cout<< i<<" ";
    }
    

    return 0;
}