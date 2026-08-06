#include<bits/stdc++.h>
using namespace std;
int countdigits(int n){
    int count = 0;
    while(n > 0){
        count = count + 1;
        n = n / 10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << countdigits(n);
    return 0;
}
