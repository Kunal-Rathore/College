
// store digit of n = 4215 in vector


#include <iostream>
#include <vector>

using namespace std;

vector <int> solve(int n)
{
    vector <int> tempvec;
    vector <int> ans;
    if(n==0)
    {
        return tempvec;
    }
   ans =  solve(n/10);
    tempvec.push_back(n%10);

    for(auto t: tempvec)
    {
        ans.push_back(t);
    }
    return ans;
}

int main() {
 
    int n = 4215;

    vector <int> ans  = solve(n);

    for(auto i: ans)
    {cout<<i<<" ";}

    return 0;
}