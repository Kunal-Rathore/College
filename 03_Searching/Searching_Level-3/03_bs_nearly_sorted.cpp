

// given a nearly sorted array find a target and return it index if exit else return -1

#include <iostream>
#include <vector>

using namespace std;

int findTarget_in_NearlySorted(vector <int> &arr,int target)
{
    int start = 0;
    int end  = arr.size()-1;

    int mid  = start+(end-start)/2;

    while(start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        else if( mid-1 >= 0 && arr[mid-1]== target)
        {
            return mid-1;
        }

        else if(mid+1 < arr.size() && arr[mid+1]== target)
        {
            return mid+1;
        }

        else if(arr[mid]> target) // move left by 2 mid
        {
            end = mid-2;
        }
        else  //move right by 2 mid
        { 
            start = mid+2;
        }

        mid = start+(end-start)/2;
    }

return -1;
}




int main()
{

    vector<int> arr = {20,10,30,50,40,70,60};  

    int target = 10;

    int ans = findTarget_in_NearlySorted(arr,target);


cout<< "The index of target is- "<<ans <<endl;

        return 0;
}