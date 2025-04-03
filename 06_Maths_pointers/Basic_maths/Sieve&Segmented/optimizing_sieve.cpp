
#include <iostream>
#include <vector>

using namespace std;

vector <bool> normalSieve(int n)
{
    vector <bool> sieve(n,true); // creating sieve to get all prime no

    // marking 0 and 1 as non prime
sieve[0] = sieve[1] = false;
 
for(int i =2; i*i<= n; i++)      // OPTIMIZATION TILL ROOT N
    {
       if(sieve[i]) // agar sieve of i prime ho toh,
       {
            int j = i*i;  // uske multiples ko non prime kardoo (OPTIMIZATION i*i)
            while(j<=n)
            {
                sieve[j] = false;
                j = j+i;
            }
       }
    }

    return sieve;


}


int main() {
 
    int n  = 25;

    vector <bool> isPrime = normalSieve(n);

    for(int i = 2; i< n; i++)
    {
        if(isPrime[i])
        {
            cout<< i<<" ";      // print all prime no till n
        }
    }

    return 0;
}