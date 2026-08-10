#include <bits/stdc++.h>
using namespace std;

int decToBinary(int n) {
    int ans = 0;
    int pow = 1;
    while (n > 0) {
        int rem = n % 2;  
        n /= 2;           
        ans += rem * pow;
        pow *= 10;         
    }
    return ans;
}

int main() {
    int n = 20;
    cout << decToBinary(n) << endl;  // prints 10100
    return 0;
}
