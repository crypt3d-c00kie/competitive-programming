#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
void solve(){
    ll x;
    cin >> x;
    
    if(x <= 50){
        cout << "LEFT" << endl;
        return;
    }
    cout << "RIGHT" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}