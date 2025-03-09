/*Problem Statement

Rearrange Array Elements by Sign

Given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers, return the array of nums such that the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Examples:

Example 1: Input: nums = [3,1,-2,-5,2,-4] Output: [3,-2,1,-5,2,-4]

Example 2: Input: nums = [-1,1] Output: [1,-1]


LeetCode - https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

*/

#include <iostream>
#include <vector>

using namespace std;

void arrangeArr(vector<int> &nums)
{
    int size = nums.size();

    int even =0;
    int odd = 1;

    vector <int> temp(size);

    for(int  i =0; i<size; i++)
    {
        if(nums[i] >0)
        {
            temp[even] = nums[i];
            even = even +2;
        }
        else{
            temp[odd] = nums[i];
            odd = odd+2;
        }
    }

    
       nums = temp;
}

int main()
{

    vector<int> arr = {4, 3, -3, -2, -1, 1};

    arrangeArr(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}