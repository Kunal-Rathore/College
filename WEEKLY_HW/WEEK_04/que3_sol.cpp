#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

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

// Function to perform Exponential Search
int exponentialSearch(vector<int> &arr, int target)
{

    if (arr[0] == target)
    {
        return 0;
    }

    int i = 1;
    while (i < arr.size() && arr[i] <= target)
    {
        i = i * 2; // gives starting and ending index of new search space
    }
    int size = arr.size();
    return binarySearch(arr, i / 2, min(size - 1, i), target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 10, 15, 20, 40, 50}; // Sorted Array
    int target = 10;

    int index = exponentialSearch(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
