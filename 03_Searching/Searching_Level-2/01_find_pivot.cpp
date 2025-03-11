// Que1 -> Find pivot index where pivot index was the index of maximum element of a rotated sorted array

// eg -> Input -> arr = [12,14,16,2,4,6,8,9]
//       Output -> 2 // index of 16

#include <iostream>
#include <vector>

using namespace std;

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

int main()
{

    vector<int> arr = {12, 14, 15, 16, 2, 4, 6, 8, 9};

    int pivot = find_pivot(arr);

    cout << "Index of pivot element is- " << pivot << endl;

    return 0;
}