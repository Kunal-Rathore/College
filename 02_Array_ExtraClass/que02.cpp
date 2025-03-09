/*Problem Statement

C++ Program For Sorting An Array Of 0s, 1s and 2s

Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

Examples:

Input: {0, 1, 2, 0, 1, 2} Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1} Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}


LeetCode - https://leetcode.com/problems/sort-colors/description/

*/



    #include <iostream>
    #include <vector>
    using namespace std;

    void sortArr(vector<int> &arr)
    {
        int size = arr.size();
        int left = 0;
        int right = size - 1;
        int index = 0;

        while (index <= right)
        {
            if (arr[index] == 0)
            {
                swap(arr[index], arr[left]);
                left++;
                index++;
            }

            else if (arr[index] == 2)
            {
                swap(arr[index], arr[right]);
                right--;
                // index++ will not be done cause we don't know what will come at arr[index] on swapping it has all three posiblities of 1,0,2 so therefore we need to check on arr[index] after swaping, therefore we avoid it.
            }
            else
            {
                index++;
            }
        }
    }

    int main()
    {

        vector<int> arr = {0, 1, 1, 2, 0, 1};

        sortArr(arr);

        cout << "Arrray after sorting- ";
        for (auto i : arr)
        {
            cout << i << " ";
        }

        return 0;
    }