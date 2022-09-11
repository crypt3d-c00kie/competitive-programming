#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v1(n);
    ll m = LLONG_MAX;
    for(ll i=0;i<n;i++){
        cin >> v1[i];
        if(v1[i] >=0 and m > v1[i])
            m = v1[i];
    }
    
    ll min1 = *min_element(v1.begin(),v1.end());
    ll max1 = *max_element(v1.begin(),v1.end());
    if (m == LLONG_MAX)
        cout << max1*max1 << " " << min1*min1 << endl;
    else{
        if(min1 < 0)
            cout << min1*max1 << " " << max(min1*min1, max1*max1) << endl;
        else
            cout << min1*min1 << " " << max1*max1 << endl;
    }
 
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}