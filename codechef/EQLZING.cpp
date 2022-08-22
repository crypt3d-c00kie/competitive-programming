#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        
        if((x == y) ||((x+y) %2==0))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}