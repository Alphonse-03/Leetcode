class Solution {
public:
    int score(vector<vector<int>>& stu,vector<vector<int>>& men,int i,int j)
    {
        int sc=0;
        for(int x=0;x<stu[i].size();x++)
        {
            if(stu[i][x]==men[j][x])
            {
                sc++;
            }
        }
        return sc;
    }
    
    int helper(vector<vector<int>>& stu,vector<vector<int>>& men,int i,int j,vector<int>& vis)
    {
        if(i>=stu.size() || j>=men.size())return 0;
        int sc=score(stu,men,i,j);
        if(vis[j]==1)
        {
            return helper(stu,men,i,j+1,vis);
        }
        else
        {
            int a=helper(stu,men,i,j+1,vis);
            vis[j]=1;
            int b=sc+helper(stu,men,i+1,0,vis);
            vis[j]=0;
            return max(a,b);
        }   
    }
    int maxCompatibilitySum(vector<vector<int>>& stu, vector<vector<int>>& men) {
     
        int n=stu.size();
        vector<int> vis(n,0);
        return helper(stu,men,0,0,vis);
    }
};