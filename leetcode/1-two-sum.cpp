#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> resultant;
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
        int temp = target - nums[i];
        if(m.find(temp) != m.end()){
        resultant.push_back(m[temp]);
        resultant.push_back(i);
        }
    
        m[nums[i]] = i;
    }
    return resultant;
}

int main(){
    vector<int> given;
    vector<int> ans;
    int n,t;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Input elements :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Target sum :: ";
    cin >> t;
    ans = twoSum(given, t);
    cout << "The indices of values :: ";
    for(auto x : ans)
        cout << x << " ";
    return 0;
}