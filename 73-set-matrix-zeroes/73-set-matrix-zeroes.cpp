class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<int> row;
        set<int> col;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(row.find(i)!=row.end() || col.find(j)!=col.end())
                {
                    mat[i][j]=0;
                }
            }
        }
    }
};