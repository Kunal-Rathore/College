

// Count Dearragement (GFG)
// dearrangement -> sabhi element ko apni jagha se switch karna 

#include <iostream>
#include <vector>

using namespace std;

int solve(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    int ans = (n-1)*(solve(n-1)+ solve(n-2));
    return ans;
}

int countDearrangement(vector <int> Dearragement)
{
  int n = 4;
  int ans = solve(n);
  return ans;
}


int main(){


    vector <int> Dearragement = {10,20,30};

    int ans = countDearrangement(Dearragement);

    cout << ans;

return 0;
}