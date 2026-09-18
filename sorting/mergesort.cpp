#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& arr, int start, int mid, int end){
    vector<int> temp;

    int left = start;
    int right = mid + 1;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= end){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }


}

void mergeSort(vector<int>& arr, int start, int end){
    if(start >= end)
    return;

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}