class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=0;
        int e=0;
        vector<int> ans;
        while(s<m && e<n)
        {
            if(nums1[s]<nums2[e])
            {
                ans.push_back(nums1[s]);
                s++;
            }
            else
            {
                ans.push_back(nums2[e]);
                e++;
            }
        }
        while(s<m)
        {
            ans.push_back(nums1[s]);
            s++;
        }
        while(e<n)
        {
            ans.push_back(nums2[e]);
            e++;
        }
        nums1=ans;
    }
};