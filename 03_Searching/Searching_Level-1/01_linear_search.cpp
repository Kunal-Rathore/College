
// Linear Search

#include <iostream>
#include <vector>

using namespace std;

void findTarget(vector <int> arr, int target)
{
    for(auto i: arr)
    {
        if(i == target)
        {
            cout<<"found"<<endl;
            return;
        }
    }
    cout<<"not found"<<endl;


    return;
}


int main() {
 
    vector <int> arr ={10,20,30,40,50,60};
    int target =50;

   findTarget(arr,target);
    return 0;
}