class Solution {
    public int maxProfit(int[] prices) {
        int min=prices[0];
        int prf=0;
        for(int i=1;i<prices.length;i++){
            
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                prf=Math.max(prf,prices[i]-min);
            }
        }
        return prf;
        
        
    }
}