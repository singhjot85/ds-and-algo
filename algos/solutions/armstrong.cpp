#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> digits(int n){
    vector<int> digits;

    while(n){
        digits.push_back(n%10);
        n/=10;
    }

    return digits;
}

bool is_armstrong(int n){
    ll ret = 0;
    vector<int> dgts = digits(n);
    for(auto x: dgts) ret += pow(x, size(dgts));
    return (n == ret);
}

int main() {

    int x;
    cout<<"Integer: ";cin>>x;

    cout<<"Is armstrong: "<<endl<<is_armstrong(x)<<endl;
    
    return 0;
}