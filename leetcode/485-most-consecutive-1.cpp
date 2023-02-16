#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    vector<int> visited;
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            count++;
            if(i+1 == nums.size())
                visited.push_back(count);
        }
        else{
            visited.push_back(count);
            count = 0;
        }
    }
    int maxCount = INT_MIN;
    for(auto x : visited){
        maxCount = max(maxCount, x);
    } 
    return maxCount;   
}
int main(){
    int n;
    vector<int> given;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Most consecutive ones :: " << findMaxConsecutiveOnes(given);
    return 0;
}
