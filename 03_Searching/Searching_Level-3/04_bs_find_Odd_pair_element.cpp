

// Que- > given an array having pair of no. but one no. occurs odd times one in pair and another time single find that

// Ex. -> arr = {2,2,6,6,3,3,6,7,7,5,5};  // here 6 element index no. 7 is the ans.


#include <iostream>
#include <vector>

using namespace std;

int findIndex (vector <int> &arr)
{
    int start = 0;
    int size = arr.size();
    
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start <=end)
    {
        if(start == end)
        {
            return start;
        }

        else if(mid % 2 == 0)
        {
            if(mid+1 < size &&  arr[mid] == arr[mid+1])
            {
                start = mid+2;
            }
            else{
                end = mid;
            }
        }

        else
        {
            if( mid -1 >= 0 && arr[mid] == arr[mid-1])
            {
              start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        mid = start +(end-start)/2;
    }

    return -1;

}


int main() {
 
    
    vector <int> arr = {2,2,3,6,6,3,3,6,6,7,7,5,5};

    int ansIndex = findIndex(arr);


    cout<< "Index of odd pair element is- "<<ansIndex <<" and element is- " << arr[ansIndex]<<endl;
    return 0;
}