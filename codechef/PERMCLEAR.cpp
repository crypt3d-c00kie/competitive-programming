#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n1,n2;
    vector<ll> v1;
    set<ll>s;
    cin >> n1;
    for(ll i=0;i<n1;i++){
        ll tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }
    cin >> n2;
    for(ll i=0;i<n2;i++){
        ll x;
        cin >> x;
        s.insert(x);
    }
    for(ll i=0;i<n1;i++){
        if(s.count(v1[i]))
            continue;
        else
            cout << v1[i] << " ";
    }
    cout << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}