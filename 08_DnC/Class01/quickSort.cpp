

#include <iostream>

using namespace std;

int func(int arr[], int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j)
    {
    
        while(arr[i]< arr[pivot] && i<j)
        {
            i++;
        }

        while(arr[j]> arr[pivot] && j>i)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i], arr[j]);
        }

    }
   
    swap(arr[j], arr[pivot]);
   
    return j;
}



void quickSort(int arr[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int partitionIndex = func(arr, low, high);

    quickSort(arr, low, partitionIndex-1); // left array

    quickSort(arr, partitionIndex+1, high); // right array



}


int main() {
 
    int arr[] = {33,42,11,1,343,65,543};

    int size = 7;
    quickSort(arr,0,size-1);
    
for(int i= 0; i< size; i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}