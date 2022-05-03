class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> s=nums;
        sort(s.begin(),s.end());
        int ans=0;
        int i=0;
        for(;i<nums.size();i++){
            if(nums[i]!=s[i])break;
        }
        int e=nums.size()-1;
        for(;e>=0;e--){
            if(nums[e]!=s[e])break;
        }
        return (e-i+1)<0?0:(e-i+1);
    }
};