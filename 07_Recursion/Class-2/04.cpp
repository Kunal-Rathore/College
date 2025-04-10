// minimum in array


#include <iostream>
#include <limits.h>

using namespace std;

void isFound(int *arr, int size, int index, int  &min){
    if(index >= size)
    {
return;
    }
    if(arr[index]< min)
    {
        min = arr[index];
    }
    isFound(arr, size, index+1, min);

}

int main() {
 
    int arr[] = {23,53,22,435,6,4,121};
    int size = 7;
    int min = 900;

   isFound(arr, size, 0, min);

   cout<<min <<endl;
    return 0;
}