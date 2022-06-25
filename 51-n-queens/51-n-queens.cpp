class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(int r,int c,vector<string>& grid){
        for(int i=r-1;i>=0;i--){
            if(grid[i][c]=='Q')return false;
        }
        
        int x=r-1;
        int y=c-1;
        while(x>=0 && y>=0){
            if(grid[x][y]=='Q')return false;
            x--;
            y--;
        }
        
        x=r-1;
        y=c+1;
        while(x>=0 && y<grid.size()){
            if(grid[x][y]=='Q')return false;
            x--;
            y++;
        }
        
        
        
        
        return true;
    }
    
    
    
    void helper(vector<string>& grid,int row){
        if(row==grid.size()){ans.push_back(grid); return ;}
        
        for(int i=0;i<grid.size();i++){
            if(isSafe(row,i,grid)){
                grid[row][i]='Q';
                helper(grid,row+1);
                grid[row][i]='.';
            }
        }
        
    }
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> grid(n,string(n,'.'));
        
        helper(grid,0);
        
        return ans;
        
        
    }
};