#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> createFrequencyMap(vector<int> & arr){
    unordered_map<int, int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    return freq;
}

int main(){
    vector<int> arr = {1, 2, 3, 2, 1, 4, 5, 1};
    unordered_map<int, int> freqMap = createFrequencyMap(arr);
    
    for(auto & pair : freqMap){
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }
    
    return 0;
}