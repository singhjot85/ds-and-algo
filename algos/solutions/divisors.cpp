#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
    vector<int> divs;
    for(int i=1; i<=n; i++) if(n%i==0) divs.push_back(i);
    return divs;
}

vector<int> divisorsOptimized(int n){
    vector<int> vec;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            vec.push_back(i);
            if (i != n/i) vec.push_back(n/i);
        }
    }
    return vec;
}

int main() {
    int n; cin>>n;

    for (auto x: divisors(n)) cout<<x<<" ";
    cout<<endl;
    for (auto x: divisorsOptimized(n)) cout<<x<<" ";

    return 0;
}