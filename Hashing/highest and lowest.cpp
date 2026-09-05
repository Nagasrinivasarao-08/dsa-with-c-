#include<bits/stdc++.h>
using namespace std;

void findhighestandlowest(vector<int> & arr){
    unordered_map<int,int> map;
    for(int i = 0; i < arr.size(); i++){
        map[arr[i]]++;
    }
    int maxFreq = 0;
    int minFreq = INT_MAX;
    int maxElement = -1;
    int minElement = -1;

    for(auto x : map){
        int element = x.first;
        int freq = x.second;
        if(freq > maxFreq){
            maxFreq = freq;
            maxElement = element;
        }
        if(freq < minFreq){
            minFreq = freq;
            minElement = element;
        }
    }

    cout << "Highest Frequency Element: " << maxElement << " with frequency: " << maxFreq << endl;
    cout << "Lowest Frequency Element: " << minElement << " with frequency: " << minFreq << endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 1, 3, 4, 5, 5};
    findhighestandlowest(arr);
    return 0;
}