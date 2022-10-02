#include<bits/stdc++.h>
using namespace std;
/*
    Leetcode 238 (product of array except self)
    input : [1,2,3,4]
    output : [24,12,8,6]
    
    value at i = product of prefix * product of suffix
*/
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> resultant;
    int prod = 1;
    int n = nums.size();
    
    if(n < 1)
        return resultant;
    for(int i=0;i<n;i++){
        prod *= nums[i];
        //cout << prod << " :: prod " << endl;
        resultant.push_back(prod);
    }
    prod = 1;
    for(int i=n-1;i>0;i--){
        resultant[i] = resultant[i-1] * prod;
        prod *= nums[i];
        //cout << "prod :: " << prod << endl;
    }
    resultant[0] = prod;
    return resultant;
}
int main(){
    int size;
    vector<int> given;
    cout << "Size :: ";
    cin >> size;
    cout << "Input :: ";
    for(int i=0;i<size;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    vector<int> answer;
    answer = productExceptSelf(given);
    cout << "Result :: ";
    for(auto x : answer)
        cout << x << " ";
    cout << endl;

    return 0;
}