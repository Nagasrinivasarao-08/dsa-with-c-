#include<bits/stdc++.h>
using namespace std;
void pattern9(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++)
        cout << " ";
        for(int j = 0; j < 2 * i + 1; j++)
        cout << "*";
        cout << endl;
    }

}
void inverted(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
        cout << " ";
        for(int j = 0; j < 2 * (n - i) -1;  j++)
        cout << "*";
        cout << endl;
    }
}
int main(){
    int n = 6;
    pattern9(n);
    inverted(n);
}