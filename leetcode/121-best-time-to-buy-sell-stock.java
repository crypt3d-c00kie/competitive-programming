class Solution {
    public int maxProfit(int[] prices) {
        int maxNow = 0;
        int maxUntil = 0;
        
        for(int i=1; i < prices.length; i++){
            maxNow = Math.max(0, maxNow += prices[i] - prices[i-1]);
            maxUntil = Math.max(maxNow, maxUntil);
        }
        
        return maxUntil;
    }
}