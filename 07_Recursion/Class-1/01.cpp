
// find 2^n using recursion

#include <iostream>

using namespace std;

int findans(int n)
{ // base case
    if(n==0)
    {
        return 1;
    }

    //recursion call

    int ans = 2*findans(n-1);
  return ans;
}

int main() {
 
    int n = 4;

    int ans = findans(n);

    cout<<ans<<" ";

    return 0;
}