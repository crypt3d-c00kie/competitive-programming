#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum = 0;
    int leftSum = 0;
    int rightSum = 0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    for(int i=0;i<nums.size();i++){
        rightSum = sum - nums[i] - leftSum;
        if(leftSum == rightSum){
            return i;
        }
        leftSum += nums[i]; 
    }
    return -1;
}
int main(){
    vector<int> given;
    int n;
    cout << "Number of elements :: ";
    cin >> n;

    cout << "Elements :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Solution :: " << pivotIndex(given);
    return 0;
}