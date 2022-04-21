class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int s=0;
        int e=mat.size()-1;
        int n=mat.size();
        int m=mat[0].size();
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(mat[mid][0]<=target && (mid==n-1 || mat[mid+1][0]>target))
            {
                int ns=0;
                int ne=m-1;
                while(ns<=ne)
                {
                    int nm=ns+(ne-ns)/2;
                    if(mat[mid][nm]==target)return true;
                    if(mat[mid][nm]<target)
                    {
                        ns=nm+1;
                    }
                    else
                    {
                        ne=nm-1;
                    }
                }
                return false;
            }
            if(mat[mid][0]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
        
    }
};