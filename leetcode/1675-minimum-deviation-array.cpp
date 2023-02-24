class Solution {
public:
        int minimumDeviation(vector<int>& nums) {
        set<int> s;
        for (int num : nums) {
            if (num % 2 == 0) {
                s.insert(num);
            } else {
                s.insert(num * 2);
            }
        }
        int minDiff = INT_MAX;
        while (true) {
            int max = *s.rbegin();
            int xmin = *s.begin();
            minDiff = min(minDiff, max - xmin);
            if (max % 2 == 1) {
                break;
            }
            s.erase(max);
            s.insert(max / 2);
        }
        return minDiff; 
    }
};