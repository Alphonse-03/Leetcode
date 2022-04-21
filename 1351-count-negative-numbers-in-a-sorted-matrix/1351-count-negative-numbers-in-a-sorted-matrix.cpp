class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid[0].size();
        for(int i=0;i<grid.size();i++)
        {
            int s=0;
            int e=m-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(grid[i][mid]<0)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            ans+=m-s;
        }
        return ans;
    }
};