
// Binary Search-  Can be implement only on sorted array(only on monotonious function).


// Que1 (binary search) -> find target using binary search

// Leetcode - https://leetcode.com/problems/binary-search/description/


#include <iostream>
#include <vector>   

using namespace std;

int binarySearch(vector <int> &arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;

    while(start <=end)
    {
        if (arr[mid]==target)
        {
            return mid;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid])
        {
            end = mid+1;
        }
        mid = (start+end)/2;
    }
return -1;
}


int main() {
 
    vector <int> arr = {10,20,30,40,50,60,70,80};
    int target = 70;
    int ansIndex  =binarySearch(arr,target);

if(ansIndex == -1)
{
    cout<<"Not found\n";
}   
else{
    cout<<"Found at index- "<<ansIndex<<endl;
}

    return 0;
}