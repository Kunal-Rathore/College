
/*
Problem statement- 
 Sqrt(x)
 Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

*/



// Leetcode -> https://leetcode.com/problems/sqrtx/description/


// Find square root of given no. in O(logN) 


// Approach -> 
    // create search space.
    // predicate function 
    // binary search



#include <iostream>
#include <vector>

using namespace std;

int findSqr_Root(int x)
{
    // creating search space
    int start = 0;
    int end = x;

    int mid = start+(end -start)/2;
    int ans =-1;
    while(start<=end)
    {
        if(mid*mid == x)
        {
            return mid;
        }
        else if (mid*mid> x)
        {
            end  =mid-1;
        }
        
        else{
            ans = mid; // may be mid will be the last hope
            start = mid+1;
        }
        mid  = start+(end -start)/2;

    }

    return ans;
    
}

int main() {
 
    
    int x = 68;

    int sqrRoot = findSqr_Root(x);
    
    cout<<"Square root is- "<<sqrRoot<<endl;

    return 0;
}