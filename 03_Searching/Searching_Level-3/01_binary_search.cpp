

 // find division of two given no. without using / operator and use binary search


#include <iostream>
#include <vector>

using namespace std;

int findAns(int divisor, int divident)
{
    int start = 0;
    int end = divident;

    int mid = start+(end - start)/2;
int ans = -1;
    while(start<= end)
    {
        int check = mid*divisor;
        if(check == divident)
        {
            return mid;
        }
        else if(check < divident)
        {
            ans  = mid;
            start = mid +1;
        }
        else 
        {
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
return ans;
}

int main() {
 
    int divisor = 7;
    int divident = 29;

    int ans = findAns(divisor, divident);

    cout<<"The division ans is- "<<ans<<endl;

    return 0;
}