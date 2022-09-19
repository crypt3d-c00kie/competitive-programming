#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    try{
        string s = to_string(x);
        string rev = string(s.rbegin(),s.rend());
        if(s[0] == '-'){
            int res = -1 * stoi(rev);
            return res;
        }
        int res = stoi(rev);
        return res;     
    }
    catch(...){
        return 0;
    }
}
int main(){
    int n;
    cout << "Given :: ";
    cin >> n;
    cout << "Reversed :: " << reverse(n) << endl;
    return 0;
}