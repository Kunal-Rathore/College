

//Most IMP ques 6, -> Find the peak element in an mountain array


#include <iostream>
#include <vector>

using namespace std;

int findPeak(vector <int> &arr)
{
    int start = 0;
    int end= arr.size()-1;

    int mid = start + (end-start)/2;

    while(start<end)
    {
       if(arr[mid]<arr[mid+1])
       {
         start = mid+1;
       }
       else{
        end = mid;
       }

       mid = start+(end-start)/2;
    }

return arr[start];
}



int main() {
 
    vector <int> arr = {10,20,90,80,70,60,50,40,30};

    int peak = findPeak(arr); 

    cout<<"The peak element is- "<<peak<<endl;

    return 0;
}