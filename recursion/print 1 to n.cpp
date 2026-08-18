#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n <= 0)  
        return;
    
    cout << "srinivas" << endl;
    
    fun(n - 1);  
}

int main(){
    int n = 5;
    fun(n);
    return 0;
}
