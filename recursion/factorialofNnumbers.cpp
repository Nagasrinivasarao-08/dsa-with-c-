#include<bits/stdc++.h>
using namespace std;

int factorialofNnumbers(int n){
 if(n == 0 || n == 1){
    return 1;
 }

 return n * factorialofNnumbers(n - 1);
}
int main(){
    int n = 5;
    cout << factorialofNnumbers(n);
    return 0;
}