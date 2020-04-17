class Solution {
public:
    
    void mark_visited(int i , int j , vector<vector<char>>& grid, vector<vector<int>> &visited){
        int m = visited[0].size(), n = visited.size();    
        if(!(0<=i && i<n) || !(0<=j && j<m)) return ;
        
        if(grid[i][j] == '0') return ;
        
        if(visited[i][j]) return ;
        
        visited[i][j] = 1;
        
        for(int k = 1 ; k <= 4; k++){
            mark_visited(i, j-1, grid, visited);
            mark_visited(i, j+1, grid, visited);
            mark_visited(i-1, j, grid, visited);
            mark_visited(i+1, j, grid, visited);
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        const int rows = grid.size();
        if(rows == 0)return 0;
        const int cols = grid[0].size();
        if(cols == 0)return 0;
        int cnt=0;
        vector<vector<int>> visited(rows,vector<int>(cols,0));
        for(int i=0; i<rows; i++){
            for(int j = 0; j <cols ; j++){
                if(grid[i][j] == '1' and !visited[i][j]){
                    mark_visited(i, j, grid, visited);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
