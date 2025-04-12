
#include <iostream>

using namespace std;

bool  isPresent(int *arr, int target, int size, int index)
{
    if(index >= size)
    {
        return false;
    }
    if(arr[index] == target)
    {
        return true;
    }
    bool nextelement =  isPresent(arr, target,size, index+1);
    return   nextelement;
}
    

int main() {
 
 int arr[]  = {3,4,6,7,8,9};
 
 int target = 4;
 int size = 6;

 bool found = isPresent(arr,target, size, 0);

 if(found)
 cout<< "found";

 else
 cout<<"not found";
    return 0;
}