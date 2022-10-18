#include <bits/stdc++.h>
using namespace std;

// two pointer approach

bool isPalindrome(string s){
    int left = 0;
    int right = s.length()-1;

    while(left < right){

        if(!isalnum(s[left]))
            left++;
        else if(!isalnum(s[right]))
            right--;
        else if(tolower(s[left]) != tolower(s[right]))
            return false;
        else{
            left++;
            right--;
        }
    }    
    return true;
}
int main(){
    string given;
    cout << "Given :: ";
    cin >> given;

    cout << "Is valid palindrome? :: " << isPalindrome(given) << endl;
    return 0;
}