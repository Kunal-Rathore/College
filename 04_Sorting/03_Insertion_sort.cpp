

// Insertion Sort -> Insert the element at its correct place by comparing with the previous elements. 

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector <int> &arr)
{
    int n = arr.size();
    //we skip the first element as it is already sorted
    for(int i = 1; i<n; i++)
    {
        int j = i-1;
        int key = arr[i]; // to place after right shifting of j

        while(j>= 0 && arr[j] > key )
        {
            arr[j+1] = arr[j];  // shifts the j right to make index empty for i th index at it correct place 
            j--;
        }
        arr[j+1]= key; // place the key at its correct position
    }
}

int main() {
 
    vector<int> arr = {2, 8, 7, 5, 6,1,4,3};
    insertionSort(arr);

cout<<"After insertion sort array is- ";
    for (auto i: arr)
    {
        cout<< i<<" ";
    }

    return 0;
}