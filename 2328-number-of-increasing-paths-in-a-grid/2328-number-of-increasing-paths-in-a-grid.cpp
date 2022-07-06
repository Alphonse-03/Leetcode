class Solution {
public:
    
    int mod=1000000007;
    vector<vector<int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
    
    vector<vector<int>> dp;
    int helper(int i,int j,vector<vector<int>> &grid){
        long ans=1;
        if(dp[i][j]!=-1)return dp[i][j];
        for(auto &d:dirs){
            int x=i+d[0];
            int y=j+d[1];
            if(x<grid.size()  && y<grid[0].size() && x>=0 && y>=0 && grid[x][y]>grid[i][j]){
                ans+=helper(x,y,grid);
                ans%=mod;
               
            }
        }
        ans%=mod;
         dp[i][j]=ans;
        return ans;
        
    }
    
    
    
    
    int countPaths(vector<vector<int>>& grid) {
        int ans=0;
        dp.resize(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans+=helper(i,j,grid);
                ans%=mod;
            }
        }
        ans%=mod;
        return ans;
    }
};