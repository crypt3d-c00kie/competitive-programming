#include<bits/stdc++.h>
using namespace std;
/*
    run inf loop to begin with
    split n into digits
    maintain sum of squares of digits for each iteration
    return true if sum == 1
    return false if it already exist in set
    else insert it to the set
    copy n = sum

*/
bool isHappy(int n) {
    set<int> checkset;
    while(1){ 
        int powSum = 0; 
        while(n != 0){
            int digit = n%10;
            powSum += digit*digit;
            n /= 10;
        }
        if (powSum == 1)
            return true;
        else if(checkset.find(powSum) != checkset.end())
            return false;
        
        checkset.insert(powSum);
        n = powSum;
    }
    return false;
 }
int main(){
    int given;
    cout << "Input :: ";
    cin >> given;
    cout << "Output :: ";
    if(isHappy(given))
        cout << "True";
    else
        cout << "False";
}