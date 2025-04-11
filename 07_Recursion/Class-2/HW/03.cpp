
// having vector in input and give no. in output (opposite of above)

#include <iostream>
#include <vector>

using namespace std;

int solve(vector <int> &v,int lastIndex)
{ 
    int ans = 0;
    int temp;
    if(lastIndex < 0)
    {
        return 0;
    } 

 int ansPart =  solve(v, lastIndex-1);
  temp = v[lastIndex];
    ans=  (ansPart *10) + temp;
 
    return ans;
    
}


int main() {
 
    vector<int> v = {1, 2, 3, 4, 5};
    int size = v.size();

    int ans = solve(v,size-1);

    cout<<ans;


    return 0;
}