class Solution {
    public int arraySign(int[] nums) {
        int product = 1;
        for (int num : nums) {
            if (num == 0) {
                return 0;
            }
            product *= (num > 0) ? 1 : -1;
        }
        return product;
    }
}
