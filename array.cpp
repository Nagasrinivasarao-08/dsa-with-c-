#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5] = {1,2,3,4,5};
for(int i = 0; i< 5; i++){
    int sum = 0;
    sum += arr[i];
    cout << "the sum of array is: " << sum << endl;
}
return 0;
}