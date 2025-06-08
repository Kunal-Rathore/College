

// house robber 1
// leetcode 198

#include <iostream>
#include <vector>

using namespace std;

int choriOne(vector <int> house, int i)
{
    if(i >= house.size())
    {
        return 0;
    }

    // 1st case -> including 0th index 
    int op1 = house[i] + choriOne(house, i+2);

    //2nd case -> not including 0th index
     int op2 = 0 + choriOne(house, i+1);

     int maxi = max(op1, op2);
     return maxi;
}


int main(){

vector <int> house = {4,2,1,1};

int ans = choriOne(house, 0);

cout<< ans;

return 0;
}