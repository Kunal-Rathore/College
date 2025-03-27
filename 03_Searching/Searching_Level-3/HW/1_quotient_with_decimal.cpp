
// 1)  Find division of two given no. without using / operator and use binary search along
// with 3 decimal values and the given no. may be negative

#include <iostream>
#include <vector>

using namespace std;

int findIntegerPart(int divisor, int divident)
{
    int start = 0;
    int end = divisor;
    int ansInt = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int productt = mid * divident;

        if (start == end)
        {
            return start; // to being safe from edge case
        }

        else if (productt <= divisor)
        {
            ansInt = mid; // mid may be the ans (quotient)
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ansInt;
}

double findQuotient(int divisor, int divident)
{
    double ans = findIntegerPart(divisor, divident);

    // now decimal points

    double point = 0.1;

    for (int i = 0; i < 3; i++)
    {
        double j = ans;
        while (j * divident <= divisor)
        {
            ans = j;
            j += point;
        }

        point = point / 10;
    }

    return ans;
}

int main()
{

    int divisor = -51;
    int divident = 4;

    double ans = findQuotient(abs(divisor), abs(divident));

    //   cout<<ans<<endl;

    if (divisor > 0 && divident > 0 || divisor < 0 && divident < 0)

    {
        printf("%0.3f", ans);
    }

    else
    {

        printf("%0.3f", -ans);
    }
    return 0;
}