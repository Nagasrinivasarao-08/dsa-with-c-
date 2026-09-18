#include<bits/stdc++.h>
using namespace std;
void recursiveinsertionsort(int arr[], int i, int n){
    if(i == n)
    return;
    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]){
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    recursiveinsertionsort(arr, i + 1, n);
}

int main(){
    int arr[]={13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " before insertion sort" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "";
    }
        recursiveinsertionsort(arr, 0, n);
    cout << "After insertion sort" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << "";
    }

    return 0;

}