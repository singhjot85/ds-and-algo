#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
This Algorith can be used to get primefactors of a number, HCF and LCM of n numbers.
Currently only integers are used, later larger data types can be used for large numbers.
It finds primefactors as it runs, i.e. if x in list then the algo will know prime factors till x.
*/

bool isPrime(int x)
{
    int p1 = 1;
    while (p1 < x - 1)
    {
        if (x % p1 == 0 && p1 != 1)
            return false;
        p1++;
    }
    return true;
}

set<int> primes = {1, 2};
vector<int> primeFactorize(int num)
{
    vector<int> factors = {1};
    int originalNum = num;

    for (auto x : primes)
    {
        if (x == 1)
            continue;
        while (num % x == 0)
        {
            factors.push_back(x);
            num /= x;
        }
    }

    if (num > 1)
    {
        int start = *primes.rbegin();
        for (int i = start; i < originalNum; i++)
        {
            if (i == 1)
                continue;
            if (num == 0 || num == 1)
                break;
            if (isPrime(i))
                primes.insert(i); // Build primes over time
            while (num % i == 0)
            {
                num /= i;
                factors.push_back(i);
            }
        }
    }

    factors.push_back(originalNum);

    return factors;
}

int hcf(vector<int> numbers)
{
    
    map<int, vector<int>> primeFactorMap;

    for (auto x : numbers)
    {
        vector<int> primeFactors = primeFactorize(x);

        cout << "Integer: " << x << endl
             << "Factors: ";
        for (auto x : primeFactors)
            cout << x << ",";
        cout << endl;

        primeFactorMap.insert({x, primeFactors});
    }

    // Logic to get HCF from primeFactors
    return 0;
}

int main()
{
    vector<int> n = {20, 15};

    cout << hcf(n) << endl;

    return 0;
}