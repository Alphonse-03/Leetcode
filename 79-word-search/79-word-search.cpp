class Solution {
public:
    
    bool helper(vector<vector<char>>& board,string& word,int x,int y,int i)
    {
        int n=board.size();
        int m=board[0].size();
        if(i==word.size())return true;
        if(x>=n || y>=m || x<0 || y<0)return false;
        if(board[x][y]!=word[i])return false;
        char t=board[x][y];
        board[x][y]=' ';
        bool found= helper(board,word,x+1,y,i+1) | helper(board,word,x-1,y,i+1) | helper(board,word,x,y+1,i+1) | helper(board,word,x,y-1,i+1);
        board[x][y]=t;
        return found;
        
    }
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    if(helper(board,word,i,j,0))return true;
                }
            }
        }
        return false;
    }
};