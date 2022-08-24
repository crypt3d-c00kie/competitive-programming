#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        double x1,x2,y;
        cin >> x1 >> x2 >> y;
        double w = (x1+x2)/2;
        if(w > y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}