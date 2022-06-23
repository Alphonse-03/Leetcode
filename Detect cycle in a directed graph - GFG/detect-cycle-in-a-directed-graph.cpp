// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
  
    
    bool dfs(int i,vector<int> adj[],vector<int>& vis,vector<int>& dvis)
    {
        vis[i]=1;
        dvis[i]=1;
        for(auto k:adj[i])
        {
            if(dvis[k]==1)return true;
            else
            {
                if(vis[k]==0)
                {
                    if(dfs(k,adj,vis,dvis))return true;
                }
            }
        }
        dvis[i]=0;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V,0);
        vector<int> dvis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,adj,vis,dvis))return true;
            }
        }
        return false;
        
    }
    
    // bool helper(int i,vector<int> adj[],vector<bool>& vis,vector<bool>& dfsvis){
    //     if(dfsvis[i]==1)return true;
    //     for(auto &j:adj[i]){
    //         vis[i]=1;
    //         dfsvis[i]=1;
    //         if(helper(j,adj,vis,dfsvis))return true;
            
    //         dfsvis[i]=0;
    //     }
    //     return false;
        
    // }
    
    
    
    
    
    // bool isCyclic(int v, vector<int> adj[]) {
    //     // code here
    //     vector<bool> vis(v);
    //     vector<bool> dfsvis(v);
    //     for(int i=0;i<v;i++)
    //     {
    //         if(helper(i,adj,vis,dfsvis))return true;
    //     }
    //     return false;
        
        
    // }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends