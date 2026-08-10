#include <bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int n) {
    vector<int> res;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
            if(i != n / i) {  // avoid duplicate when i == sqrt(n)
                res.push_back(n / i);
            }
        }
    }
    sort(res.begin(), res.end()); // optional: to get divisors in ascending order
    return res;
}

int main() {
    int n = 36;
    vector<int> divisors = getDivisors(n);
    cout << "Divisors of " << n << ": ";
    for(int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}
