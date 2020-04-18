

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(n == 0 || m==0) return 0;
        
        int dp[n][m];
        memset(dp, 0, sizeof(dp));
        
        dp[0][0] = grid[0][0];
 
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                 if(i+1 < n){ 
                     if(dp[i+1][j] == 0){
                         dp[i+1][j] = dp[i][j]+grid[i+1][j];
                         
                     }else{
                         dp[i+1][j] = min(dp[i+1][j], grid[i][j]+grid[i+1][j]);
                     }
                }
                
                if(j+1 < m){
                    if(dp[i][j+1] == 0){
                       
                        dp[i][j+1] = grid[i][j+1]+dp[i][j];
                        
                        
                    }else{
                        dp[i][j+1] = min(dp[i][j+1], dp[i][j]+grid[i][j+1]);
                    }
                }
            }
        }
        
        return dp[n-1][m-1];
    }
};
