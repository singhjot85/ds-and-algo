#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> primeFactorize(int num, vector<int>& primes){
    vector<int> factors;
    
    for (int i=0; i<primes.size(); i++){
        while(num/primes[i] == 0){
            factors.push_back(primes[i]);
            num /= primes[i];
        }
    }
    
    if (num > 1){
        for(int i=primes.back(); i<num; i++){
            while (num%i == 0){
                factors.push_back(i);
                num/=i;
                primes.push_back(i); // Build primes over time
            }
        }
    }
    return factors;
}

int hcf(vector<int> numbers){
    vector<int> primes = { 1 , 2 };
    map<int, vector<int>> primeFactorMap;
    
    for(auto x: numbers){
        vector<int> primeFactors = primeFactorize(x, primes);
        
        cout<<"Integer: "<<x<<endl<<"Factors: ";
        for(auto x: primeFactors) cout<<x;
        cout<<endl;
        
        primeFactorMap.insert({x, primeFactors});
    }
    
    // Logic to get HCF from primeFactors
    return 0; 
}

int main() {
    vector<int> n = {15,20};
    
    cout<<hcf(n)<<endl;

    return 0;
}