

// painting fence (GFG)

#include <iostream>
#include <vector>

using namespace std;

int paintingFence(int n, int k)
{
    if(n == 1)
    {
        return k;
    }
    if(n ==2)
    {
        return k*(k-1);
    }
    int ans = (k-1)*(paintingFence(n-1,k) + paintingFence(n-2,k));
    return ans;
}

int main(){

int n = 3;
int k = 3;

int ans = paintingFence(n,k);

cout<<ans;

return 0;
}