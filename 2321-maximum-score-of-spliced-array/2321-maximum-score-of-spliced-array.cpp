class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=accumulate(nums1.begin(),nums1.end(),(long long)0);
        long long sum2=accumulate(nums2.begin(),nums2.end(),(long long)0);
        long long impact1=0;
        long long impact2=0;
        long long curr=0;
        for(int i=0;i<nums1.size();i++){
            if(curr<0){
                curr=0;
            }
            curr+=nums1[i]-nums2[i];
            impact1=max(curr,impact1);
        }
        sum2+=impact1;
        curr=0;
         for(int i=0;i<nums1.size();i++){
            if(curr<0){
                curr=0;
            }
            curr+=nums2[i]-nums1[i];
            impact2=max(curr,impact2);
        }
        sum1+=impact2;
        return max(sum1,sum2);
    }
};