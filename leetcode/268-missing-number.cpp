#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<=nums.size();i++){
        if(i != nums[i]){
        return i;
        }
    }
    return 0;
}
int main(){
    vector<int> input;
    input.push_back(3);
    input.push_back(4);
    input.push_back(0);
    input.push_back(1);
    int n;
    n = missingNumber(input);
    cout << "The missing number : "<< n << endl;
    
    return 0;
}