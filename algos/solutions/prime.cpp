#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for (int i=2; i<n; i++) if(n%i==0) return false;
    return true;
}

bool isPrime1(int n){
    for(int i=2; i*i<n; i++){
        if(n%i==0 or n%(n/i)==0) return false;
    }
    return true;
}

bool isPrime1(int n){
    for(int i=2; i*i<n; i++){
        if(n%i==0 or n%(n/i)==0) return false;
    }
    return true;
}

int main() {
    int n; cin>>n;
    cout<<"Is prime: "<<isPrime(n)<<endl;
    cout<<"Is prime: "<<isPrime1(n)<<endl;
    
    return 0;
}