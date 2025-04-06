
#include <iostream>
#include <vector>

using namespace std;

void func(int arr[])
{
    *arr = *arr+1;
}

int main() {
 
    int arr[]  = {20,30,40};

    func(arr);

    cout <<"after func- ";
    for(int  i= 0;i<3;i++){
cout<<arr[i]<<" ";
    }
    return 0;
}