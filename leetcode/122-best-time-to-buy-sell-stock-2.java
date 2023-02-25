class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        
        for(int i=0;i<prices.length-1;i++){
            if(prices[i] < prices[i+1]){
                maxProfit += (prices[i+1] - prices[i]);      
            }
          
        }
        
        return maxProfit;
    }
}