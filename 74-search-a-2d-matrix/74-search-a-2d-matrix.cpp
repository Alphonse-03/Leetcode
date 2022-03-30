class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found=false;
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                {
                    found=true;
                    break;
                }
            }
        }
        return found;
    }
};