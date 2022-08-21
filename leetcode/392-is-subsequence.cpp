#include<bits/stdc++.h>
using namespace std;

// program to check if the subsequence exist 

bool isSubsequence(string &s, string &t){
    int n = s.length(),m=t.length();
    int j = 0; 
    
    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;
    return (j == n);
}

int main(){
    string s1,s2;
    cout << "Type the string :: ";
    cin >> s1;
    cout << "Subsequence check :: ";
    cin >> s2;

    if(isSubsequence(s1,s2) == true)
        cout << "It's a subsequence " << endl;
    else
        cout << "It's not a subsequence!" << endl;
    return 0;
}