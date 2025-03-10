// Most Imp Que 3-> Find last occurence



#include <iostream>
#include <vector>

using namespace std;

int find_last_occurence(vector <int> &arr, int target)
{
    int start =0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;   //prevents integer overflow
    int lastAns= -1;

    while(start<=end){
        if(arr[mid]==target)
        {
            lastAns = mid;
            start = mid+1;

        }
        else if(target<arr[mid])
        {
            end = mid-1;
        }
        else if (target> arr[mid])
        {
            start =mid+1;
        }
        mid = start +(end-start)/2;
    }
    return lastAns;
}


int main() {
 
    vector <int> arr = {1,2,3,4,5,5,5,6,7};
int target= 5;
    int ansIndex = find_last_occurence(arr,target);

if(ansIndex ==-1)
{
    cout<<"Not found"<< endl;
}
else{
  cout<<"Found at index- "<< ansIndex << endl;
}
return 0;
}