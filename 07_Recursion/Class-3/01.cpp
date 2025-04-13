

// array sorted or not

#include <iostream>

using namespace std;


bool isSorted(int arr[], int size, int index)
{
    if(index >= size)
    {
        return true;
    }
if(arr[index] >= arr[index-1])
{
    bool isTrue =   isSorted(arr, size, index+1);
    return isTrue;
}
  
else{
    return false;
} 

    
}

int main() {
 

    int arr[] = {10,20,50,40,90,70};

    int size = sizeof(arr)/ sizeof(arr[0]);

    bool isTrue = isSorted(arr, size, 1);

    cout<< isTrue;
    

    return 0;
}