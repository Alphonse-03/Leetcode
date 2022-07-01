class Solution {
public:
    int ans=0;
    int diff=INT_MAX;
    void helper(int base,int i,vector<int>& arr,int t,int x){
      //  cout<<x<<endl;
        if(i==arr.size()){
            if(abs(x-t)<diff){
                diff=abs(x-t);
                ans=x;
            }
            else if(abs(x-t)==diff){
                ans=min(ans,x);
            }
            return;
        }
        
        helper(base,i+1,arr,t,x);
        
        helper(base,i+1,arr,t,x+arr[i]);
        helper(base,i+1,arr,t,x+arr[i]+arr[i]);
        
    }
    
    
    
    

    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int target) {
        int n=toppingCosts.size();
     
        for(auto &i:baseCosts){
            helper(i,0,toppingCosts,target,i);        
       }
        return ans;
    }
};