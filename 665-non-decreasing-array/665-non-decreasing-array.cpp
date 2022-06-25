class Solution {
public:
     bool checkPossibility(vector<int>& nums) {
        int c=0;
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                c++;
                if(c==2)return false;
                idx=i-1;
            }
        }
        if(idx==0||c==0 || idx==nums.size()-2)return true;
       
        if(idx+2<nums.size() && nums[idx]<=nums[idx+2])return true;
          
        
       
        if(nums[idx-1]<=nums[idx+1])return true;
        
         return false;
     }
         
        
};