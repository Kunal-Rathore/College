
    // double each element

    #include <iostream>
    #include <vector>
    
    using namespace std;
    
    void doubleArr(int *arr, int size, int index)
    {
        if(index>= size)
        {return;}

        arr[index] = arr[index]*2;

        doubleArr(arr,size,++index);
    }
    
    int main() {
     
        int arr[] = {10,20,30,40,50};
        int size =5; 

        doubleArr(arr,size,0);
    
        for(int i = 0; i< size; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }