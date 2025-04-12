
// print array

#include <iostream>

using namespace std;

 void isPresent(int arr[], int size, int index)
{
    if(index >= size)
    {
        return;
    }

    cout<<arr[index]<<" ";
     isPresent(arr, size, index+1);
}

int main() {

    int arr[] = {3,4,5,6,7,8};
    int size   = 6;
    
    isPresent(arr, size, 0);

    

    return 0;
}