class Solution {
public:
    
    long long diff(vector<int>& nums,int mid){
        long long ans=0;
        for(auto &i:nums){
            ans+=abs(i-mid);
        }
        return ans;
    }
    
    
    
    
    int minMoves2(vector<int>& nums) {
        int mx=INT_MIN;
        int mi=INT_MAX;
        for(auto &i:nums){
            mx=max(i,mx);
            mi=min(i,mi);
        }
        int high=mx;
        int low=mi;

        
        while(mi<=mx){
            int left,right=INT_MAX;
            int mid=mi+(mx-mi)/2;
            // if(mid!=low)
            //     left = diff(nums,mid-1);
            // if(mid!=high)
            //     right = diff(nums,mid+1);
          
            left=diff(nums,mid-1);
            right=diff(nums,mid+1);
            int cen=diff(nums,mid);
            if(cen<=left && cen<=right)return cen;
            if(cen<=right){
                mx=mid-1;
            }
            else{
                mi=mid+1;
            }
        }
        return 0;      
    }
};