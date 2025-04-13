
//  maximize cut the segment

#include <iostream>
#include <climits>

using namespace std;

int findMaxCut(int n, int x, int y, int z)
{
    if(n==0) // rod is cut successfully
    {
         return 0;
    }
    if(n<0)       // rod is not cut successfully
    {
        return INT_MIN;
    }

    int option1 = findMaxCut(n-x,x,y,z)+1;   

    int option2 = findMaxCut(n-y,x,y,z)+1;

    int option3 = findMaxCut(n-z,x,y,z)+1;


    int maxI = max(option1, max(option2,option3));  // yeh max return karega 
    return maxI;
}


int main() {

    
    int  n = 5;
    int x = 1,y = 2, z = 4;

    int maxCut = findMaxCut(n,x,y,z);

    cout<<maxCut;
    

    return 0;
}