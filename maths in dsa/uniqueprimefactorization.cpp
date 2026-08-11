#include<bits/stdc++.h>
using namespace std;
vector<int>UniquePrimefactorization(int n){
    vector<int> factors;
    for(int i = 2; i * i <=n; i++){
        if(n % i == 0){
            factors.push_back(i);
            while(n % i == 0){
                n /= i;
            }
        }
        if(n > 1){
            factors.push_back(n);
        }
    }
    return factors;
}

int main(){
    int n;
    cin >> n;
    vector<int> factors = UniquePrimefactorization(n);
    for(int i = 0; i < factors.size(); i++){
        cout << factors[i] << " ";
    }
    return 0;
}