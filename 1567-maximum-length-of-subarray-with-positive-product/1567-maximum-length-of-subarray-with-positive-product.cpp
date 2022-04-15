class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ans=0;
        int p=0;
        int n=0;
        int fn=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                if(fn==-1)fn=i;
                n++;       
            }
            if(nums[i]>0)
            {
                p++;
            }
            if(nums[i]==0)
            {
                p=0;
                n=0;
                fn=-1;
            }
            if(n%2==0)
            {
                ans=max(ans,n+p);
            }
            if(n%2!=0 && fn!=-1)
            {
                ans=max({ans,i-fn});
            }
            
        }
        
        return ans;
       
    }
};