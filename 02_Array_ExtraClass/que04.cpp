
/*Problem Statement

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Examples:

Example 1: Input: nums = [3,0,1] Output: 2

Example 2: Input: nums = [0,1] Output: 2


LeetCode: https://leetcode.com/problems/missing-number/description/



*/

#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> arr)
{
    int arrTotal = 0;
    int size = arr.size();
    int total = (size*(size+1))/2; 

    for (int i = 0; i < size; i++)
    {
        arrTotal += arr[i];
    }
int ans =0;
ans = total - arrTotal;
    return ans;
}

int main()
{

    vector<int> arr = {1,  0, 5, 2, 3};

    cout << "Missing no. is- " << findMissing(arr) << endl;

    return 0;
}

// We can also use XOR operation to find the missing number