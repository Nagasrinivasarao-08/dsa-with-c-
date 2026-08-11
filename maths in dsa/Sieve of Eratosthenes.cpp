#include<bits/stdc++.h>
using namespace std;

vector<int> sieveofEratosthenes(int n){
    vector<int> primes;
    vector<bool> isPrime(n +1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <=n; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }

        }

    }
    return primes;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < sieveofEratosthenes(n).size(); i++){
        cout << sieveofEratosthenes(n)[i] << " ";
    }
    return 0;
}