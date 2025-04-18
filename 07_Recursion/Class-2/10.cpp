

// store all occurences in vector

#include <iostream>
#include <vector>

using namespace std;

vector <int> findOccur(int arr[], int size, int target, int index)
{
    vector <int> occurences;
    if(index>= size)
    {
        return occurences;
    }
    if(arr[index]== target)
    {
        occurences.push_back(index);
    }
    vector <int> ans;
   ans=  findOccur(arr, size, target, index+1);  // 2nd lvl ans  =  3rd level occur
 
   for(int i: ans)
   {
     occurences.push_back(i);  // 2nd level ans  = 2nd ans occur
   }
   return occurences; // return 2nd level occur to level 1
}

int main() {
 
    
    int arr[]= {10,10,30,20,40,10};

    int size= 6;

    int target = 10;
     
    vector <int> ans = findOccur(arr, size, target, 0);

    for(int i: ans)
    {
        cout<<i <<" ";
    }
    return 0;
}