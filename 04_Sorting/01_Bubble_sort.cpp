// Bubble Sort -> Makes adjacent swaps if possible and pushes the maximum element at end

#include <iostream>
#include <vector>

using namespace std;
 
void bubbleSort( vector <int> &arr, int size)
{
    for(int i = 0; i < size-1; i++)   // size-1 cause at last the last greatest no. will be sorted automatically 
    {
        for (int j = 0; j < size-i-1; j++)   // required size-i-1 comparison for i iteration
    {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
    }
    }
}

int main() {
 
vector <int> arr = {5,6,2,4,1,3};
int size = arr.size();
 bubbleSort(arr,size);
cout<<"After bubble sort- "<<endl;

for(int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}