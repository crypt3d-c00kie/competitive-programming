#include <bits/stdc++.h>
using namespace std;
void solve(){
    int w,n1,n2,n3;
    cin >> w >> n1 >> n2 >> n3;
    if(w==n1||w==n2||w==n3||w==n1+n2+n3||w==n1+n2||w==n2+n3||w==n1+n3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}