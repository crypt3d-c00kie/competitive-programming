class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int entirely = nums.size()*(nums.size()+1)/2; // n*(n+1)/2
        int sum = 0;
        for(auto x: nums){
            sum += x;
        }
        return entirely-sum;
    }
};