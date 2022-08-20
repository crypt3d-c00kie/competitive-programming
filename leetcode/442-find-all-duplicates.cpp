#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;   
    sort(nums.begin(),nums.end());
    
    for(int i=1;i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            ans.push_back(nums[i]);
            i++;
        }
    }
    return ans;
}
int main(){
    int nSize;
    vector<int> given;
    vector<int> resultant;

    cout << "Number of elements :: ";
    cin >> nSize;

    cout << "Elements :: ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    
    resultant =  findDuplicates(given);
    cout << "Solution :: ";
    for(int i=0;i<resultant.size();i++)
        cout << resultant[i] << " ";

    return 0;
}