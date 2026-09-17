class Solution {
public:
    bool present=false;
    vector<int>dir={0,1,0,-1,0};

    void helper(int x, int y, vector<vector<char>>& board, int ind, string word){
        int m=board.size();
        int n=board[0].size();

        if(x>=m || y>=n){
            return;
        }
        if(ind==word.size()){
            present=true;
            return;
        }

        char temp=board[x][y];
        board[x][y]='#';

        for(int i=0;i<4;i++){
            int nx=x+dir[i];
            int ny=y+dir[i+1];

            if(nx>=0 && nx<m && ny>=0 && ny<n && board[nx][ny]!='#' && board[nx][ny]==word[ind]){
                helper(nx,ny,board,ind+1,word);
            }
        }
        board[x][y]=temp;
        return;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    helper(i,j,board,1,word);
                }
            }
        }

        return present;
    }
};
