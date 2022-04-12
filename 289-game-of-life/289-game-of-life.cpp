class Solution {
public:
    
    int live_neighbor(vector<vector<int>>& board,int i,int j,int n,int m)
    {
        int ans=0;
        if(i<n-1)ans+=board[i+1][j];
        if(i>0)ans+=board[i-1][j];
        if(j<m-1)ans+=board[i][j+1];
        if(j>0)ans+=board[i][j-1];
        if(i<n-1 && j<m-1)ans+=board[i+1][j+1];
        if(i>0 && j>0)ans+=board[i-1][j-1];
        if(i<n-1 && j>0)ans+=board[i+1][j-1];
        if(i>0 && j<m-1)ans+=board[i-1][j+1];
        return ans;  
    }
    
    

    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++)
            {
                int nei=live_neighbor(board,i,j,n,m);
                if(board[i][j]==0)
                {
                    if(nei!=3)
                    {
                        ans[i][j]=0;
                    }
                    else ans[i][j]=1;
                }
                else
                {
                    if(nei==2 || nei==3)ans[i][j]=1;
                    else ans[i][j]=0;
                }
            }
        }
        board=ans;
    }
    
    
    
    
    
    
    
    
    
};