


// Que2 (binary search) -> Find first occurence of target 

#include <iostream>
#include <vector>

using namespace std;

int find_First_occurence(vector <int> &arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;
int ans=-1;
    while(start<=end)
    { 
        if(target == arr[mid])
        {
            ans = mid;
            end = mid-1;
            
        }
        else if(target>arr[mid])
        {
            start = mid+1;
        }
       else if(target<arr[mid])
       {
        end =mid-1;
       }
       mid = (start+end)/2;
    }
 return ans;
}


int main() {
 
    vector <int> arr ={2,3,3,3,4,5,6,7};

    int ansIndex = find_First_occurence(arr,3);
    if (ansIndex==-1)
    {
        cout<<"not found"<<endl;
        
    }
    else{
    cout<<"found at index- "<<ansIndex<<endl;
    }
    return 0;
}