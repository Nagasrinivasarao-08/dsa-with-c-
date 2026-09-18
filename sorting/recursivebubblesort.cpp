#include<bits/stdc++.h>
using namespace std;

void recursivebubblesort(int arr[], int n){
    if(n == 1)
    return;
    int swap = 0;
    for(int j = 0; j <= n + 1; j++){
        if(arr[j] > arr[j + 1]){
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }

        if(swap == 1)
        return;
    }

    recursivebubblesort(arr,n - 1);
}

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before bubblesort" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    recursivebubblesort(arr,n);

    cout << "After bubble sort" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}