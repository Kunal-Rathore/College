
// print index of all occurence of target
    

#include <iostream>

using namespace std;

void solve(int arr[], int target, int index, int size)
{
    if(index>= size)
    {
        return;
    }
    if(arr[index]== target)
    {
        cout<<index<<" ";
    }
    solve(arr, target, ++index, size);
}


int main() {

    int arr[] = {10,10,30,0,10,40};
    int target = 10;

    solve(arr, target, 0,6);
    

    return 0;
}