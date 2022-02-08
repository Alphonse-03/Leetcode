class Solution {
public:
    
    void helper(int n,vector<int>& ans,int i)
    {
        if(i>n)return ;
        ans.push_back(i);
        for(int j=0;j<=9;j++)
        {
            helper(n,ans,i*10+j);
        }
    }
    
    
    
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=9;i++)helper(n,ans,i);
        return ans;
    }
};