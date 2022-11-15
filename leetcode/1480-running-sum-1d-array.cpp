#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums){
    // partial_sum(begin(nums),end(nums),begin(nums));
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        nums[i] = sum;
    }
    return nums;
}

int main(){
    int nsize;
    vector<int> given1,solution;
    cout << "Size of the array :: ";
    cin >> nsize;
    cout << "Enter the elements of the array :: ";
    for(int i=0; i<nsize; i++){
        int tmp;
        cin >> tmp;
        given1.push_back(tmp);
    }

    cout << "function call" << endl;
    solution = runningSum(given1);
    cout << "Solution :: ";
    for(int i=0;i<solution.size();i++)
        cout << solution[i] << " ";

    return 0;
}