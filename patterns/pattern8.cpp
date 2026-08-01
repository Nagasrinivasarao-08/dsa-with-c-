#include <iostream> // Replaced bits/stdc++.h for standard compatibility
using namespace std;

void pattern8(int n){
    for(int i = 0; i < n; i++){
        // 1. Print leading spaces first (increases each row)
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        // 2. Print stars (decreases each row: 11, 9, 7, 5, 3, 1)
        for(int j = 0; j < 2 * n - (2 * i + 1); j++){
            cout << "*";
        }
        // 3. New line after each row
        cout << endl;
    }
}

int main(){
    int n = 6;
    pattern8(n);
    return 0;
}
