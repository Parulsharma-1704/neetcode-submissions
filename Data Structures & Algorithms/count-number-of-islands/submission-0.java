class Solution {
    public void dfs(char[][] grid, int x, int y, int m, int n){
        int[] dir={0,1,0,-1,0};
        char temp=grid[x][y];
        grid[x][y]='#';
        for(int i=0;i<4;i++){
            int nx=x+dir[i];
            int ny=y+dir[i+1];

            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1'){
                dfs(grid,nx,ny,m,n);
            }
        }

    }
    public int numIslands(char[][] grid) {
        int m=grid.length;
        int n=grid[0].length;
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!='0' && grid[i][j]!='#'){
                    dfs(grid,i,j,m,n);
                    count++;
                }
            }
        }
        return count;
    }
}
