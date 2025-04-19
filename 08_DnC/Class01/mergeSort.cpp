

// write a merge sort code with comments


#include <iostream>

using namespace std;

// merge function declaration
void merge(int arr[], int s, int mid, int e);


void mergeSort(int arr[], int s, int e)  // function which divides the array recursively in left and right arrays
{
     // base case if there's no element and only one element then no need to further divide them
     if(s >= e)
     {
        return;
     }

     //calling merge sort after dividing the array by finding mid

     int mid  = s+(e-s)/2;
     
     //calling merge sort for left half of array
     mergeSort( arr, s,mid); 


     //calling merge sort for left half of array
     mergeSort(arr, mid+1, e);

     // now we divided the array so we need to merge them along with sorting 
     // calling merge function which will sort and merge the array using two subarrays in same arr array

     merge(arr, s, mid,e);

}

int main() {
 

    int arr[] = {23,54,90,231,56,78,6};
    int size  = 7;

    cout<<"Before merge sort- ";
    for(int i = 0; i< size; i++)
    {
        cout<< arr[i]<<" ";
    }

cout<<endl;


    mergeSort(arr,0,size-1);  // calling merge sort with starting and last index
    
  cout<<"After merge sort- ";
for(int i = 0; i< size; i++)
{
    cout<< arr[i]<<" ";
}

    return 0;
}





// merge function to sort and merge the subarrays

void merge(int arr[], int s, int mid, int e)
{
    // now need to create two arrays one left and second right with size->
    // for left array size is of mid -s +1.
    // and for right array size is of end - (mid+1)+1.

    int leftSize = mid - s +1;

    int rightSize = e - mid;    // e - mid == e - mid - 1 +1.

    // now creating two dynamic subarrays

    int *left = new int[leftSize];

    int *right = new int[rightSize];

    // now storing values from arr in both
int arrIL = s;  // to traverse arr th indices,  yaha mae phasaa hun gandaa vala from s isliye
// kyunki s se mid tak ka range hai left array me. kyunki hum right array kae or bhi subarray bnayenge ge jismae left right dono hoga and usmae left array ka index 0 nhi kuch or hoga jo s hae.
    for(int i =0; i < leftSize; i++)
    {
        left[i] = arr[arrIL];
        arrIL++;
    }

// now storing in right 

int arrIR = mid+1; // arr th index for right is after the mid

for (int i = 0; i< rightSize; i++)
{
    right[i] = arr[arrIR];
    arrIR++;
}



// now main -> merge ka logic

// now we need to compare both values of left and right and need to store in arr in increasing order

int i = 0; // to traverse arr
int leftIndex = 0; // to traverse left array
int rightIndex   =0; //to traverse right index

// we need to traverse till and one index will reach to it's array size bw left and right array

while(leftIndex < leftSize && rightIndex < rightSize)
{
    if(left[leftIndex]< right[rightIndex])
    {
        arr[i] = left[leftIndex];
        leftIndex++;
    }
    else
    {
        arr[i] = right[rightIndex];
        rightIndex++;
    }

    i++;  // arr index must increase in both case
}

// now corner case what if there still some elements in any array bw left and right

//so 

while(leftIndex < leftSize)
{
    arr[i] = left[leftIndex];
    leftIndex++;
    i++;

}


//similary for right


while(rightIndex < rightSize)
{
    arr[i] = right[rightIndex];
    rightIndex++;
    i++;

}


// now we need to delete that array which we created dynamically
delete [] left;
delete [] right;
}