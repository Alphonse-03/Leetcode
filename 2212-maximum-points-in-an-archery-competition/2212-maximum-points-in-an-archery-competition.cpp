class Solution {
public:
    vector<int> fans;
    int mx=0;
    void helper(int n,vector<int>& ali,int pt,vector<int>& ans,int curr)
    {
        if (curr==-1 || n <= 0)
        {
            if(pt>mx)
            {
                mx=pt;
                if(n>0)ans[0]+=n;
                fans=ans;
            }
            
            return;
        }
        int req=ali[curr]+1;
        
        if(n>=req)
        {
            ans[curr]=req;
            helper(n-req,ali,pt+curr,ans,curr-1);
            ans[curr]=0;
        }
        helper(n,ali,pt,ans,curr-1);
        return;
    }
    
    
    
    vector<int> maximumBobPoints(int n, vector<int>& ali) {
        vector<int> ans(ali.size());
        helper(n,ali,0,ans,11);
        return fans;
    }
};