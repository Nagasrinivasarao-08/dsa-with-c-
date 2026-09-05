#include<bits/stdc++.h>
using namespace std;
void countfreq(vector<int> & arr){
    unordered_map<int , int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    for(auto x : freq){
        cout << x.first << " " << x.second << endl;
    }

}
int main(){
    vector<int> arr = {10,5, 10, 15, 10, 5};
    countfreq(arr);
    return 0;
}