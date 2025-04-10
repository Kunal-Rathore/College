

//store even in vector
#include <iostream>
#include <vector>

using namespace std;

void solve(int *arr, int size, int index, vector <int> &ans)
{
    if(index >= size)
    {
        return;
    }

    if (arr[index] % 2 == 0)
    //even so store
    {
        ans.push_back(arr[index]);
    }

// call for next element
    solve(arr, size, index+1, ans); 
}


int main() {
 
    int arr[]= {10,11, 80,34,12,13,14};
    vector <int> ans;

    solve(arr,7,0,ans);   // arr, size, index, vector as reference 

    for(int a: ans)
    {
        cout<<a <<" ";
    }

    return 0;
}