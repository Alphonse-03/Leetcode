class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                ans[j][i]=mat[i][j];
            }
        }
        for(auto &i:ans)
        {
            reverse(i.begin(),i.end());
        }
        mat=ans;
    }
};