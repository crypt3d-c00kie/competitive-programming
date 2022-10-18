#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > nums[(i+1)%nums.size()])
            count++;
    }
    if(count > 1)
        return false;
    return true;
}
int main(){
    int n;
    cout << "Number of elements :: ";
    cin >> n;
    vector<int> given;
    cout << "Given :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }

    cout << "Is given sorted and rotated :: " << check(given) << endl;
    return 0;
}