#include<bits/stdc++.h>
using namespace std;
int reversenumber(int n){
    int rev = 0;
    while(n > 0){
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;
    }
    return rev;
}
int main(){
    int n;
    cin >> n;
    cout << reversenumber(n);
    return 0;
}