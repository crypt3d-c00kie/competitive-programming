#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x;
    cin >> n >> m >> x;
    
    n = 2*n;
    m = 2*m;
    int cost = n+m;
    int solution = cost*x;
    cout << solution << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}