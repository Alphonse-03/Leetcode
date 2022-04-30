class Solution {
public:
    
    // guard 1
    // wall 2
    // vis 3;
    
    
    
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m,vector<int>(n,0));
                                 
//         set<pair<int,int>> w;
        
//         for(auto &i:walls){
//             w.insert({i[0],i[1]});
//         }
        for(auto &i:walls){
            grid[i[0]][i[1]]=2;
        }
               
          for(auto &i:guards){
            grid[i[0]][i[1]]=1;
        }
                                 
                                 
                                 
                                 
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 pair<int,int> p={i,j};
//                 if(w.find(p)!=w.end())
//                 {
//                     grid[i][j]=2;
//                 }
//             }
//         }
                                 
        for(auto &it:guards){
            int x=it[0];
            int y=it[1];
            grid[x][y]=1;
            for(int i=x+1;i<m;i++)
            {
                if(grid[i][y]==2 || grid[i][y]==1)break;
                else grid[i][y]=3;
            }
            for(int i=y+1;i<n;i++)
            {
                if(grid[x][i]==2 || grid[x][i]==1)break;
                else grid[x][i]=3;
            }
            for(int i=x-1;i>=0;i--)
            {
                if(grid[i][y]==2 || grid[i][y]==1)break;
                else grid[i][y]=3;
            }
            for(int i=y-1;i>=0;i--)
            {
                if(grid[x][i]==2 || grid[x][i]==1)break;
                else grid[x][i]=3;
            }
        }
        
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)c++;
            }
        }
       
        
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<grid[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
                return c;                  
                    
    }
};
                                 
                                 
                                 
                                 
                                 
                                 
                                 