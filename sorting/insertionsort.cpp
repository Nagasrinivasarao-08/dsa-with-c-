#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
       for(int j = i - 1; j >= 0 && arr[j] > temp; j--){

        arr[j + 1] = arr[j];
      
       }
       arr[j + 1] = temp;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    insertionSort(arr, arr.size());

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}