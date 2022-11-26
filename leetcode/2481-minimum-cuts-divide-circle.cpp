#include<bits/stdc++.h>
using namespace std;

 int numberOfCuts(int n) {
    if(n == 1 or n == 0){
        int t = 0;
        return t;
    }
    if(n%2 == 0)
        return n/2;  
    return n;
}

int main(){
    int x;
    cin >> x;
    cout << numberOfCuts(x) << endl;

    return 0;
}