class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if(rows == 0) return 0;
        int cols = matrix[0].size();

        if(rows == 0 || cols == 0) return 0;
        
        int solutionMatrix[rows][cols];
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++)
            {
               if(i == 0 || j == 0 || matrix[i][j] == '0') 
                   solutionMatrix[i][j] = matrix[i][j] - '0'; 
               else{
                    solutionMatrix[i][j] = min({ solutionMatrix[i-1][j]  , solutionMatrix[i][j-1] , solutionMatrix[i-1][j-1] }) + 1;    
               }  
            }
        } 
        int ans = 0;
        for(int i=0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                ans = max(ans, solutionMatrix[i][j]);
            }
        }   
                     
        return ans * ans;
    }
};
