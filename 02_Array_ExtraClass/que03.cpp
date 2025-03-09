/*Problem Statement

Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Examples:

Example 1: Input: nums = [1,2,3,4,5,6,7], k = 3 Output: [5,6,7,1,2,3,4] Explanation: rotate 1 steps to the right: [7,1,2,3,4,5,6] rotate 2 steps to the right: [6,7,1,2,3,4,5] rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2: Input: nums = [-1,-100,3,99], k = 2 Output: [3,99,-1,-100] Explanation: rotate 1 steps to the right: [99,-1,-100,3] rotate 2 steps to the right: [3,99,-1,-100]


LeetCode - http://leetcode.com/problems/rotate-array/description/

*/





/*   My logic through lecture I Studied, which is correct but not effecient



#include <iostream>
#include <vector>
using namespace std;

void rotateArr(vector<int> &arr, int k)
{
    vector<int> temp;
    int size = arr.size();

    for (int i = size - k; i < size; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = size - 1; i >= k; i--)
    {
        swap(arr[i], arr[i - k]);
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;

    rotateArr(arr, k);

    cout << "Array after " << k << " rotation is- ";
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}

*/

// Here is the Babbar Bhaiya's approach-

#include <iostream>
#include <vector>

using namespace std;

void rotateArr(vector<int> &arr, int k)
{

    int size = arr.size();
    int newIndex;

    vector<int> ansArr(size, 0);
    for (int i = 0; i < size; i++)
    {
        newIndex = (i + k) % size;

        ansArr[newIndex] = arr[i];
    }
    cout << "Array after " << k << " rotation is- ";
    for (auto i : ansArr)
    {
        cout << i << " ";
    }

    arr = ansArr;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;

    rotateArr(arr, k);

    return 0;
}