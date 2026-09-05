#include<bits/stdc++.h>
using namespace std;
void countfrequency(vector<int> & arr){
    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1};
    countfrequency(arr);
    return 0;
}