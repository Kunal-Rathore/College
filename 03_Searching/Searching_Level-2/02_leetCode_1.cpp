/*
Problem statement- 

Search in Rotated Sorted Array

Example- Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 
*/

// LeetCode -> https://leetcode.com/problems/search-in-rotated-sorted-array/


#include <iostream>
#include <vector>

using namespace std;


// To find pivot index

int find_pivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int size = arr.size();

    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }

        else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }

        else if (mid + 1 < size && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[start]) // means on line B
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}


//Binary Search-

int binarySearch(vector <int> &arr, int target, int start, int end)
{
    int mid = start+ (end-start);

    while(start<= end)
    {
        if(arr[mid] ==target)
        {
            return mid;
        }
        else if(target < arr[mid])
        {
            end = mid-1;
        }
        else{
            start =mid+1;
        }
        mid = start+(end-start);
    }

    return -1;
}


// To find target-

int findTarget(vector <int> &arr, int target)
{
    
    int size = arr.size()-1;
    int pivot = find_pivot(arr);
    int ans =-1;

    if(target >= arr[0]&& target <= arr[pivot])
    {
        ans = binarySearch(arr, target, 0, pivot);
    }
    else{
        ans = binarySearch(arr,target, pivot+1,size);
    }

    return ans;
}


int main() {
 
    vector<int> arr = {12, 14, 15, 16, 2, 4, 6, 8, 9};

    int target = 0;

    int find = findTarget(arr,target);

    if(find == -1)
    {
         cout<<"Target not exist"<<endl;
    }
   else{
    cout<<"Target is at index "<<find<<endl; 
   }


    return 0;
}