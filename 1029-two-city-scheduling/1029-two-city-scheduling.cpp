class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),[](auto &a,auto &b)
             {
                 return a[0]-a[1]<b[0]-b[1];
             });
        int ans=0;
        int n=costs.size()/2;
        for(int i=0;i<costs.size()/2;i++)
        {
            ans+=costs[i][0];
            ans+=costs[n+i][1];
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//     int dp[51][51];
//     int helper(vector<vector<int>>& costs,int i,int a,int b,int n)
//     {
//         if(i>=costs.size())return 0;
//         if(dp[a][b]!=-1)return dp[a][b];
//         if(a==n)
//         {
//             return dp[a][b]=costs[i][1]+helper(costs,i+1,a,b+1,n);
//         }
//         if(b==n)
//         {
//             return dp[a][b]=costs[i][0]+helper(costs,i+1,a+1,b,n);
//         }
//         int x=costs[i][1]+helper(costs,i+1,a,b+1,n);
//         int y=costs[i][0]+helper(costs,i+1,a+1,b,n);
//         return dp[a][b]=min(x,y);
            
//     }
    
    
    
//     int twoCitySchedCost(vector<vector<int>>& costs) {
//         memset(dp,-1,sizeof(dp));
//         return helper(costs,0,0,0,costs.size()/2);
//     }
};