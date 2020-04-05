class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit=0;
        int n = prices.size();
        
        if(n>=2)
        for(int i =0; i<n-1; i++){
            int diff = (prices[i+1] - prices[i]);
            if(diff > 0){
                maxProfit += diff; 
            } 
        }
        
        return maxProfit;
        
    }
};
