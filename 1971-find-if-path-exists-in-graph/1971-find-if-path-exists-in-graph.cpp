class Solution {
public:
    
    bool helper(vector<int> adj[],int s,int d,vector<int>& vis){
        if(s==d)return true;
        if(vis[s]==1)return false;
        
        vis[s]=1;
        int ans=false;
        for(auto &j:adj[s]){
            if(vis[j]==0){
                ans|=helper(adj,j,d,vis);
            }
        }
        return ans;
    
    }
    
    
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(n,0);
        
        return helper(adj,source,destination,vis);
    }
};