class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        // binary search to find the element that occurs only once
        while (start < end){
            int mid = start+(end-start)/2;

            if (mid % 2 == 1){
                mid--;
            }
            if (nums[mid] != nums[mid+1]){
                end = mid;
            }
            else{
                start = mid + 2;
            }
        }
        return nums[start];
    }
};