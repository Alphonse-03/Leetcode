class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<bool> bit(32,false);
        for(auto &i:nums){
            int idx=0;
            while(i){
                if(i&1)bit[idx]=true;
                idx++;
                i/=2;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(bit[i])ans+=pow(2,i);
        }
        return ans;
    }
};