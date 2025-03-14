
// Selection Sort -> Select the minimum element and place it at correct place

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector <int> &arr)
{
    int n = arr.size();
    for(int i = 0; i < n-1; i++)
    {
        int mini = i;
        for(int j= i+1; j < n; j++)
        {
            if(arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}


int main() {
 
    vector <int> arr ={ 6,4,1,2,5,3};

    selectionSort(arr);

    cout<<"After selection sort- "<<endl;

    for(auto i: arr)
    {
        cout<<i<<" ";
    }

    return 0;
}