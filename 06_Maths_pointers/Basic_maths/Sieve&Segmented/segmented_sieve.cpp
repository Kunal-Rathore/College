
#include <iostream>
#include <vector>
#include <math.h> // for sqrt()
using namespace std;

vector<bool> normalSieve(int n)
{
    vector<bool> sieve(n, true); // creating sieve to get all prime no

    // marking 0 and 1 as non prime
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i<= n; i++)
    {
        if (sieve[i]) // agar sieve of i prime ho toh,
        {
            int j = i * i; // uske multiples ko non prime kardoo
            while (j <= n)
            {
                sieve[j] = false;
                j = j + i;
            }
        }
    }

    return sieve;
}

vector<bool> segmentedSieve(int l, int r)
{
    // creating space of 10^6 for range l to r

    vector<bool> sieveAns((r - l) + 1, true);

    // now getting all prime no. till root r to mark the sieveAns prime or not
    vector<bool> sieve = normalSieve(sqrt(r));

    // now we have sieve but if may also have nonprime like 4,6 etc till root r cause we mark as non prime but we didn't remove them so

    vector<int> primesieve; // storing all prime no. only in new sieve
    for (int i = 0; i < sieve.size(); i++)
    {
        if (sieve[i])
        {
            primesieve.push_back(i);
        }
    }

    // now final task to mark all element of range l to r using that primes

    for (auto ss : primesieve)
    {
        // now the first_element will be
        int first_element = (l / ss) * ss;

        // edge case-
        if (first_element < l)
        {
            first_element = first_element + ss;
        }

        int j = max(first_element, ss * ss);

        while (j <= r)
        {
            sieveAns[j - l] = false; // j - l cause j is 150 but our sieve ans index is from 0
            j = j + ss;
        }
    }

    return sieveAns;
}

int main()
{

    int l = 150;
    int r = 175;

    vector<bool> isPrime = segmentedSieve(l, r);


    for (int i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            cout << i + l << " "; // print all prime no till n
        }
    }

    return 0;
}