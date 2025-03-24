

#include <iostream>
#include <vector>

using namespace std;





// simple finding nearest sqr integer of x
int binarySearch(int x)
{
    int start = 0;
    int end = x;
int ans = -1;
    while(start<=end)
    {
    int mid = start+ (end-start)/2;
     
    if(mid*mid <= x)
    {
            ans = mid;
            start = mid+1;
    }
    else 
     {
    end = mid-1;
     }
  }
return ans;
}



double precisionValaAns(int x)
{
   double ans =  binarySearch(x); 
   
   
         double point = 0.1;
        double j = ans;
for(int i =0; i < 5 ; i++) 
{
    j = ans;
   while(j*j <= x)
   {
        ans = j;
        j = j+point;
 }
 
   point = point/10;
}
   return ans;
}







int main() {
 
    int x = 51;

    double ans =  precisionValaAns(x);
    
    printf("%0.5f", ans);

    return 0;
}