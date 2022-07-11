class Solution {
public:
    //1 guard
    //2 wall;
    //3 not_safe
    
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m,vector<int>(n));
        for(auto &i:guards){
            grid[i[0]][i[1]]=1;
        }
        for(auto &i:walls){
            grid[i[0]][i[1]]=2;
        }
        for(auto &i:guards){
            for(int j=i[0]+1;j<m;j++){
                if(grid[j][i[1]]==2 || grid[j][i[1]]==1)break;
                grid[j][i[1]]=3;
            }
            for(int j=i[1]+1;j<n;j++){
                if(grid[i[0]][j]==2 || grid[i[0]][j]==1)break;
                grid[i[0]][j]=3;
            }
            for(int j=i[0]-1;j>=0;j--){
                if(grid[j][i[1]]==2 || grid[j][i[1]]==1)break;
                grid[j][i[1]]=3;
            }
            for(int j=i[1]-1;j>=0;j--){
                if(grid[i[0]][j]==2 || grid[i[0]][j]==1)break;
                grid[i[0]][j]=3;
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)ans++;
            }
        }
        return ans;
        
        
    }
};

















