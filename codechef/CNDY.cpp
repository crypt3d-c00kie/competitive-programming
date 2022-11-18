#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n;
    cin>>n;
	int a[2*n];
	for(int i=0; i<2*n; i++)
	    cin>>a[i];

    map<int, int>mp;
    
	for(int i=0; i<2*n; i++)
	    mp[a[i]]++;
	    
    int flag=0;
    for(auto x:mp){
        if(x.second>=3){
            flag=1;
            break;
        }
    }
    if(flag)
	    cout<<"No"<<endl;
     else
	    cout<<"Yes"<<endl;

    
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}