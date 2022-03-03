class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int diff=0;
        unordered_map<int,int> mp;
        if(nums.size()<3)return 0;
        diff=nums[0]-nums[1];
        int st=0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i-1]-nums[i]==diff)
            {
                mp[diff]+=i-st-1;
            }
            else
            {
                st=i-1;
                diff=nums[st]-nums[i];
            }
        }
        int ans=0;
        for(auto &i:mp)
        {
            ans+=i.second;
        }
        return ans;
    }
};