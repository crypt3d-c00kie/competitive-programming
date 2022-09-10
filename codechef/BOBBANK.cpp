#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll w,x,y,z;
    cin >> w >> x >> y >> z;
    /*
        w -> current balance
        x -> fixed deposit 
        y -> withdraw
        z -> months
    */
    int solution = w+ (x-y) * z;
    //solution = solution * z;
    cout << solution << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}