class Solution {
public:
    // Input: numCourses = 2, prerequisites = [[1,0]]
    // Output: true
    
     bool helper(int i,vector<vector<int>> &adj,vector<bool>& vis,vector<bool>& dfsvis){
         dfsvis[i]=1;
         vis[i]=1;
         for(auto &j:adj[i]){
            if(dfsvis[j])return true;

             if(vis[j]==0)
             {
                if(helper(j,adj,vis,dfsvis))return true;
             }
         }
         dfsvis[i]=0;
         return false;
         
         
         
     }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        for(auto &i:pre){
            adj[i[0]].push_back(i[1]);
        }
        
        vector<bool> vis(n);
        vector<bool> dfsvis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(helper(i,adj,vis,dfsvis))return false;
            }
        }
        return true;
    
      
    }
};