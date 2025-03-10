


// Most Imp Que 4-> Find total occurence

// Similar - Leetcode - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;

int find_first_occurence(vector <int> &arr, int target){

    int start = 0;
    int end = arr.size()-1;
    int startingIndex=-1;
    
    int mid  = start +(end-start)/2;

    while(start<= end){
        if(arr[mid] == target )
        {
            startingIndex = mid;
            end  = mid-1; // for 1st occurence
        }

        else if(target >arr[mid])
        {
            start = mid+1;
        }

        else if(target<arr[mid])
        {
            end = mid-1;
        }

        mid = start +(end-start)/2;
        }

return startingIndex;
}




int find_last_occurence(vector <int> &arr, int target){

    int start = 0;
    int end = arr.size()-1;
    int endingIndex=-1;
    int mid  = start+ (end-start)/2;

    while(start<= end){
        if(arr[mid] == target )
        {
          endingIndex = mid;
            start  = mid+1; // for last occurence
        }

        else if(target >arr[mid])
        {
            start = mid+1;
        }

        else if(target<arr[mid])
        {
            end = mid-1;
        }

        mid = start +(end-start)/2;
        }
return endingIndex;

}




int find_total_occurence(vector <int> &arr, int target)
{
    int startingIndex= find_first_occurence(arr,target); 
    int endingIndex= find_last_occurence(arr,target); 
    return (endingIndex -startingIndex) +1;
  }


int main() {
 
    vector <int> arr = {1,2,3,3,3,3,4,5,6};
int target  =3;
    cout<<"The total occurence of target "<<target<<" is- "<<find_total_occurence(arr,target)<<endl;

    return 0;
}