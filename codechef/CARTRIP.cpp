#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        
        if(x < 300)
            x = 300;
        
        x = x*10; 
        cout << x << endl;
    }
    return 0;
}