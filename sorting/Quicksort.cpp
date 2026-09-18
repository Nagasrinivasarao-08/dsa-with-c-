#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> & arr, int start, int end){
    int idx = start - 1, pivot = arr[end];
    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            idx++;

            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}


void quicksort(vector<int>& arr, int start, int end){
    if(start < end){

        int pividx = partition(arr, start, end);
        quicksort(arr, start, pividx - 1);
        quicksort(arr, pividx + 1, end);
    }
}

int main(){
    vector<int> arr = {21,31,35,8,32,17};
    quicksort(arr, 0, arr.size() - 1);
    for(int val : arr){
        cout << val << "";
    }

    cout << endl;

    return 0;
}