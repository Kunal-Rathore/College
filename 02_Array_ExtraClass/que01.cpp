
/*
Rearrange Array Elements with Negative Numbers First

Given an array containing both positive and negative numbers in random order. The task is to rearrange the array elements so that all negative numbers appear before all positive numbers.

Note:

The given array does not contain any zeroes.
The order of resultant array does not matter.
Example:

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6 Output: -12 -13 -5 -7 -3 -6 11 6 5




GFG Link- https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
Coding Ninja - https://www.naukri.com/code360/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620
*/  




// Note- I guess two pointer method using i = 0 and j = arr.sizeof()-1, but it is more lenghty

#include <iostream>
#include <vector>

using namespace std;
void sortArray(vector<int> arr)
{
    int i, j;

    i = 0;
    j = 0;

    while (i < arr.size())
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << "Sorted array is- ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> arr = {23, -7, 12, -10, -11, 40, 60};

    sortArray(arr);
}