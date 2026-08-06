#include<bits/stdc++.h>
using namespace std;
int palindrome(int n){
    int rev = 0;
    int palindrome = n;
    while(n > 0){
        int lastdigits = n % 10;
        rev  = rev * 10 + lastdigits;
        n = n / 10;
    }
    if(rev == palindrome)
        return true;
    else
    return false;
}
int main(){
    int n;
    cin >> n;
    if(palindrome(n))
    cout << "palindrome";
    else{
        cout << "not palindrome";
    }
    return 0;
}