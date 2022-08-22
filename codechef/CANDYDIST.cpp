#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        //x candies y people
        // everyone gets even candies
       
        if(x%y == 0 && (x/y)%2==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}