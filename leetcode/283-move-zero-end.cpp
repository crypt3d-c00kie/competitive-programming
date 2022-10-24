#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int snowball = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0)
            snowball++;
        else if(snowball > 0){
            int tmp = nums[i];
            nums[i] = 0;
            nums[i-snowball] = tmp;
        }
    }
}
int main(){
    int n;
    vector<int> given;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Given  :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);
    }
    cout << "Resultant :: ";
    moveZeroes(given);
    for(auto x : given)
        cout << x << " ";
        
    return 0;
}
