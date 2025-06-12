

//house robber 2
// leetcode 

#include <iostream>
#include <vector>

using namespace std;

int solve(vector <int> house, int s,int e)
{
    if(s >=e)
    {
        return 0;
    }

    int op1 = house[s] + solve(house,s+2,e);
    int op2 = 0 + solve(house,s+1,e);
int maxi = max(op1,op2);
return maxi;
}


int chori(vector <int> house)
{
    int  e = house.size();
// including first house
    int op1 = solve(house,0,e-1);
// including last house
    int op2 = solve(house,1,e);

    int maxi = max(op1,op2);
return maxi;
}


int main(){

vector <int> house ={1,2,3,1};

int total = chori(house);

cout<<total;

return 0;
}