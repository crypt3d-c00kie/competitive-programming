#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int max1 = INT_MIN;
    int a = 0;

    for(int x : nums){
        a += x;
        max1 = max(max1,a);
        a = max(a,0);
    }
    return max1;
}

int main(){
    int nSize;
    vector<int> given;

    cout << "Number of elements :: ";
    cin >> nSize;

    cout << "Elements :: ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    int max;
    max = maxSubArray(given);
    cout << "Solution :: " << max << endl;

    return 0;
}