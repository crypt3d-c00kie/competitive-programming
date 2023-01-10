#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string>& strs) {
    // iterate through each column
    // check if col is non-decreasing
    // if col is decreasing, increment count;
    int delCount = 0;
    for(int i=0;i<strs[0].length();i++){
        for(int j=0;j<strs.size()-1;j++){
            if(strs[j][i] > strs[j+1][i]){
                delCount++;
                break;
            }    
        }
    }
    return delCount;
}

int main(){
    int n;
    cout << "Number of inputs :: ";
    cin >> n;
    vector<string> given(n);
    for(int i=0;i<n;i++){
        cin >> given[i];
    }

    cout << "Given :: " << endl;
    for(auto x : given){
        cout << x << " ";
    }

    cout << "\nSolution :: " << minDeletionSize(given) << endl;
    return 0;
}
