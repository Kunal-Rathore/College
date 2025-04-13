

// find target in sorted array using binary with recursion

#include <iostream>

using namespace std;


int binarySearch(int arr[], int start, int end ,int target)
{
   if(start > end)
   {
    return -1;
   }

   int mid = start + (end-start)/2;

   if(arr[mid] == target)
   {
    return mid;
   }

   else if(arr[mid] > target)
   {
     int aageKa = binarySearch(arr, start, mid-1 ,target);
      return aageKa;
   }
   
   else{
        int  pehleKa =  binarySearch(arr, mid+1, end ,target);
        return pehleKa;
       }

}


int main() {
 
    int arr[] = {1,3,5,6,7,8,9};
    int size = 7;
    int start = 0;
    int end = size -1;

    int target = 5;

   int isExist = binarySearch(arr,start,end,target);

    cout<< isExist;

    return 0;
}