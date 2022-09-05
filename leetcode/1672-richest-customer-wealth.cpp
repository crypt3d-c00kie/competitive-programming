#include<bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts){
    int maxWealth = 0;
    int rows = accounts.size();
    int cols = accounts[0].size();
        
    for(int i=0;i<rows;i++){
        int wealth = 0;
        for(int j=0;j<cols;j++){
            wealth += accounts[i][j];
        }
        maxWealth = max(wealth, maxWealth);
    }
    return maxWealth;
}

int main(){
    vector<vector<int>> input= {{2,8,7},{7,1,3},{1,9,5}};
    cout << "Maximum wealth :: " << maximumWealth(input) << endl;
    return 0;
}