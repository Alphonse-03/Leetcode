class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)return true;
        queue<int> qu;
        qu.push(source);
        vector<int> vis(n,0);
        vis[source]=1;
        vector<int> adj[n];
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        while(!qu.empty()){
            int back=qu.front();
            qu.pop();
            vis[back]=1;
            for(auto &i:adj[back]){
                if(vis[i]==0){
                    if(i==destination)return true;
                    qu.push(i);
                }
            }
        
        }
        return false;
        
    }
};