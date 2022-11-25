#include<bits/stdc++.h>
using namespace std;

bool isValid(string given){
    stack<char> st;
    for(auto x : given){
        if(x == '(' or x == '[' or x == '{'){
            st.push(x);
        }
        else{
            if(st.empty() or (st.top() == '(' and x != ')') or (st.top() == '[' and x != ']') or (st.top() == '{' and x != '}'))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string given;
    cout << "Given :: ";
    cin >> given;
    cout << "Valid or not? :: " << isValid(given);
    return 0;
}
