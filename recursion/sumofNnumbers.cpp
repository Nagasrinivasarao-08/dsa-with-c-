#include<bits/stdc++.h>
using namespace std;
int sumN(int n){
    int sum = 0;
    if(sum == 0){
        return 1;
    }
    cout << n << endl;

    return n + sumN(n + 1);
}
int main(){
    int n = 5;
    sumN(n);
    return 0;
}