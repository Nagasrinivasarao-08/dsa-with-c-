#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> & arr, int n){

    bool swapped = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    vector<int> arr = { 5,4,3,2,1};
    int n = arr.size();

    bubblesort(arr, n);

    for(auto x : arr){
        cout << x << "";
    }

    return 0;
}