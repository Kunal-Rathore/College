//   1) Find square root of no. and provide the ans upto 3 decimal places if it has.

/* My approach which is correct but not effective


#include <iostream>
#include <vector>

using namespace std;


float binarySearch(float ans, int x, float place)
{
    int start = 0;
   int end = 9;
int mid = start+(end-start)/2;

float ans1 = ans + mid*place;

float ans2 =ans1;


    while(start<=end)
    {
       // cout<<ans1<<endl;
        if(ans1*ans1 == x)
       {
        return ans1;
       }
       else if(ans1*ans1 > x )
       {
        end = mid-1;
       }
       else
       {

        ans2 = ans1;
        start = mid+1;
       }

         mid = start+(end-start)/2;
         ans1 = ans+mid*place;


    }
    return ans2;
}


float findSqrt(int x)
{
    int start =0;
    int end = x;

    int mid = start+(end-start)/2;
float ans =-1;

    while(start<=end)
    {
        int square = mid*mid;
        if( square == x)
        {
            return mid;
        }
        else if( square > x)
        {
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }

        mid = start+(end-start);
    }

    float place = 1;

    for(int i=0; i<3; i++)
    {
        place *= 0.10;

        ans = binarySearch(ans,x,place);
    }


    return ans;

}


int main()
{

    int x =68;

   float ans = findSqrt(x);

    cout<<"The square root is- "<<ans<<endl;

    return 0;
}


*/