class Solution {
public:
void dfs(int r, int c, int n, int m, vector<vector<int>>& grid){
        if(r<0 || r>=n || c<0 ||c>=m || grid[r][c]==0){
            return;
        }
        grid[r][c]=0;
        dfs(r-1, c, n, m, grid);
        dfs(r+1, c, n, m, grid);
        dfs(r, c-1, n, m, grid);
        dfs(r, c+1, n, m, grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int j=0; j<m; j++){//rows
            if(grid[0][j]==1){
                dfs(0, j, n, m, grid);
            }
            if(grid[n-1][j]==1){
                dfs(n-1, j, n, m, grid);
            }
        }
        for(int i=0; i<n; i++){//column
            if(grid[i][0]==1){
                dfs(i, 0, n, m, grid);
            }
            if(grid[i][m-1]==1){
                dfs(i, m-1, n, m, grid);
            }
        }
        int enclaveCount=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    enclaveCount++;
                }
            }
        }
        return enclaveCount;
    }
};