class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int orgcolor, int color){
        if(r<0 || r>=image.size() || c<0 || c>=image[0].size() || image[r][c] != orgcolor){
            return;
        }
        image[r][c]=color;
        dfs(image, r-1, c, orgcolor, color);
        dfs(image, r+1, c, orgcolor, color);
        dfs(image, r, c-1, orgcolor, color);
        dfs(image, r, c+1, orgcolor, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orgcolor=image[sr][sc];
        if(orgcolor==color){
            return image;
        }
        dfs(image, sr, sc, orgcolor, color);
        return image;
    }
};