#include<bits/stdc++.h>
using namespace std;
bool isperfectsquaredivisorexclude(int n){
    int count = 0 ;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % 10 == 0)
        continue;
        if(n % i == 0){
            if(i * i == n)
            count++;
            else
            count += 2;
        }
    }
    return count % 2 == 0;

}
int main(){
    int n;
    cin >> n;
    if(isperfectsquaredivisorexclude(n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}