#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
void solve(){
    bool barr[4];
    ll count = 0;
    ll xcount = 0;
    for(int i=0;i<4;i++)
        cin >> barr[i];
    
    for(int i=0;i<4;i++)
        if(barr[i] == 0)
            count++;
    
    if(count == 4){
        cout << "IN" << endl;
        return;
    }
    cout << "OUT" << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}