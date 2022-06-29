class Solution {
public:
    
    
    void count(vector<vector<int>>& adj,int i,long long &ans,vector<int>& vis){
        vis[i]=1;
        ans++;
        for(auto &j:adj[i]){
            if(vis[j]==0){
               // ans++;
                count(adj,j,ans,vis);
            }
        }
        
    }
    
    
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> vis(n,0);
        vector<long long> val;
        vector<vector<int>> adj(n);
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
    
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                long long x=0;
                count(adj,i,x,vis);
                val.push_back(x);
            }
        }
        if(val.size()==1)return 0;
        long long sum=accumulate(val.begin(),val.end(),(long long)0);
        
        long long ans=0;
        for(auto &i:val){
            ans+=i*(sum-i);
         
        }
        return ans/2;
        
    }
};