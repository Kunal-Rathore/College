
// print digit of n = 4215

#include <iostream>

using namespace std;

void solve(int n)

{
    if(n == 0)
    {
        return;
    }
    solve(n/10);
    cout<< n%10<<" ";


}


int main() {
 
    int n = 4215;

    solve(n);
    

    return 0;
}