class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
       
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(mat[j][i],mat[i][j]);
            }
        }
        for(auto &i:mat)
        {
            reverse(i.begin(),i.end());
        }
       
    }
};