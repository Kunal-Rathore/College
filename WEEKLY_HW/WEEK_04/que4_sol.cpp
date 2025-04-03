#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//  UNBOUNDED BINARY SEARCH

// Function to perform binary search in a given range
int binarySearch(vector<int> &arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

//STEP 1- 

// Function to perform Exponential Search
int unboundedSearch(vector<int> &arr, int target)
{

    int i = 0, j = 1;
    while (j < arr.size() && arr[j] < target)
    {
        i = j;   // will be starting index
        j = j * 2; // gives ending index of new search space
    }
    int size = arr.size();
    return binarySearch(arr, i, min(size - 1, j), target); // min cause if j will goes outofbound cause of j*2.....
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 10, 15, 20, 40, 50}; // Sorted Array
    int target = 50;

    int index = unboundedSearch(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
