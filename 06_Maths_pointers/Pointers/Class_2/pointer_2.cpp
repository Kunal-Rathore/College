
#include <iostream>

using namespace std;

void func(int arr[], int size)
{

    cout<<"Inside func arr- "<<arr<<endl;
    cout<<"Inside func &arr- "<<&arr<<endl;
}


int main() {
 
       int arr[] = {1,2,45,6,5};
       
       int *arrPtr = arr;

       cout<< *arrPtr<<endl;


char carr[]= {'h','i','i'};

char *carrPtr = carr;

cout<<carrPtr<<endl;

int (*ptrx)[5] = &arr;

cout<<ptrx<<endl;
cout<< *(*ptrx)<<endl;
cout<<sizeof(ptrx )<<endl;


// imp
cout<<endl<<endl;

int arr4[] = {1,2,4,5};

cout<<"Inside main arr- "<<arr<<endl;
cout<<"Inside main &arr- "<<&arr<<endl;
cout<<"Inside main *arr- "<<*arr<<endl;


func(arr, 4);











    return 0;
}