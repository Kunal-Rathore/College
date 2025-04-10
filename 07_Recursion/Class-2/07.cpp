

// Max in array


#include <iostream>
#include <limits.h>

using namespace std;

void isFound(int *arr, int size, int index, int  &max){
    if(index >= size)
    {
return;
    }
    if(arr[index]> max)
    {
        max = arr[index];
    }
    isFound(arr, size, ++index, max);

}

int main() {
 
    int arr[] = {23,53,22,435,6,4,121};
    int size = 7;
    int max =  -20000;

   isFound(arr, size, 0, max);

   cout<<max<<endl;
    return 0;
}