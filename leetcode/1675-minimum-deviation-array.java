class Solution {
    public int minimumDeviation(int[] nums) {
        TreeSet<Integer> set = new TreeSet<>();
        for (int num : nums) {
            // even numbers gets directly added to the set
            if (num % 2 == 0) {
                set.add(num);
            } 
            // odd numbers are doubled and then added to the set
            else {
                set.add(num * 2);
            }
        }
        int minDiff = Integer.MAX_VALUE;
        while (true) {
            int max = set.last();
            int min = set.first();
            minDiff = Math.min(minDiff, max - min);
            if (max % 2 == 1) {
                break;
            }
            set.remove(max);
            set.add(max / 2);
        }
        return minDiff;
    }
}