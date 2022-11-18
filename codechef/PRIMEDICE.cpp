#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool isPrime(ll n){
    for(ll i=2;i<n;i++)
    if(n%i == 0)
        return false;
    return true;
}
void solve(){
    ll x,y;
    cin >> x >> y;
    
    ll sum = x+y;
    if(isPrime(sum))
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}