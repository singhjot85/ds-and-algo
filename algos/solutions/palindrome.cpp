#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int countDigits(int x)
{
    int count;
    while (x)
    {
        x /= 10;
        count++;
    }
    return count;
}

int reverse(int x)
{
    ll reverse = 0;
    while (x)
    {
        int temp = x % 10;
        x /= 10;
        reverse *= 10;
        reverse += temp;
    }
    return reverse;
}
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    return x == reverse(x);
}

bool isAlnum(char c){
    return (
        (48<=c && c<=57 )
        || (65<=c && c<=90)
        || (97<=c && c<=122)
    );
}

char lowercase(char c) {
    if(65<=c && c<=90) return (c+32);
    return c;
}

bool isPalindrome(string s){
    int i=0, j=s.size()-1;
    while(i<=j){
        while(i<j && !isAlnum(s[i]) ) i++;
        while(j>i && !isAlnum(s[j]) ) j--;

        if( lowercase(s[i]) != lowercase(s[j])) return false;

        i++;        
        j--;
    }
    return true;
}

bool isPalindromRecursive(string s, int n=0){
    int x = s.size();
    if(n>=(x/2)) return true;
    if(
        lowercase(s[n]) != 
        lowercase(s[x-n])
    ) return false;

    return isPalindromRecursive(s, ++n);
}

int main()
{
    // int x;
    // cout << "Enter a number : ";
    // cin >> x;

    // cout << "Digits in "<<x<<": " << countDigits(x) << endl;
    // cout << "Reverse of "<<x<<": " << reverse(x) << endl;
    // cout << "Hence, Is "<<x<<" a palindrome: " << isPalindrome(x) << endl;

    // "A man, a plan, a canal: Panama" -> True
    string str = "race a car";
    cout<<isPalindrome(str)<<endl;

    cout<<"Recursive: "<<isPalindromRecursive("AmanaplanacanalPanama");

    return 0;
}