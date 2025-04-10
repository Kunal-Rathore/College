

// return index of the target if found else return -1

#include <iostream>

using namespace std;

int findIndex(int *arr, int size, int index, int target)
{
    if(index>= size)
    {
        return -1;
    }

    if(arr[index] == target)
    {
        return index;
    }

    int ans = findIndex(arr, size, ++index, target);
    return ans;
}

int main() {
 
    int arr[]= {1,2,44,65,57,8,86};
int target = 8;
    int index= findIndex(arr,7,0,target);

    cout<< index<< endl;

    return 0;
}