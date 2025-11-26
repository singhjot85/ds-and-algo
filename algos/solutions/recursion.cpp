#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void printNtimes(int n){
    if(n<=0) return; //Base condition
    printNtimes(n-1); //Recursive call;
    cout<<n<<endl; // Computation
}

void printReverseNTimes(int n){
    if(n==0) return; //Base condition
    cout<<n<<endl; // Computation
    printReverseNTimes(n-1); //Recursive call;
}

void printNamesNtimes(int n, string name){
    if(n==0) return;
    cout<<name<<endl;
    printNamesNtimes(n-1, name);
}

int sumofN(int n){
    if(n == 0) return 0;
    return n += sumofN(n-1);
}

ll factorial(int n){
    if(n == 0) return 1;
    return n *= factorial(n-1);
}

void reverseVec(vector<int>& vec, int n=0){
    int x = vec.size();
    if(n==(x/2)) return;
    swap(vec[n], vec[x-n-1]);
    return reverseVec(vec, ++n);
}

bool isPalindrome(string s) {
}

int main() {
    // printNamesNtimes(5, "test");
    // printNtimes(5);
    // printReverseNTimes(5);

    // cout<<"Recursive Sum:"<<sumofN(5)<<endl;
    // cout<<"Recursive fact: "<<factorial(5)<<endl;

    vector<int> vec = {1,2,3,4,5};
    cout<<"Vec: ";
    for(int x: vec) cout<<x<<" ";
    cout<<endl<<"Reverse vec: ";
    reverseVec(vec);
    for(int x: vec) cout<<x<<" ";
    cout<<endl;
    


    return 0;
}