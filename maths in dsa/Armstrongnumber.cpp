#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int originalNum, remainder, result = 0, nDigits = 0;
    originalNum = n;

    // Count the number of digits
    while(originalNum != 0){
        originalNum /= 10;
        ++nDigits;
    }
    originalNum = n;
    // Calculate the sum of the nth power of each digit
    while(originalNum != 0){
        remainder = originalNum % 10;
        result += pow(remainder, nDigits);
        originalNum /= 10;
    }
    return result == n;
}
int main(){
    int num;
    cout << "Enter an number: ";
    cin >> num;
    if(isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}