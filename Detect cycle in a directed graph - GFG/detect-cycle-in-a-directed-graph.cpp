// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    
    
     bool helper(int i,vector<int> adj[],vector<bool>& vis,vector<bool>& dfsvis){
       
        vis[i]=1;
        dfsvis[i]=1;
        for(auto &j:adj[i]){
            if(dfsvis[j]==1)return true;
            if(vis[j]==0){
                if(helper(j,adj,vis,dfsvis))return true;
            } 
        }
        dfsvis[i]=0;
        
        return false;
        
    }
    
    
    
    
    
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<bool> vis(v);
        vector<bool> dfsvis(v);
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0) {
                if(helper(i,adj,vis,dfsvis)==true)return true;
                
            }
        }
        return false;
        
        
    }
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