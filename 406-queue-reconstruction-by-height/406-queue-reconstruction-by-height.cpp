class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& vec) {
        vector<vector<int>> ans;
        sort(vec.begin(),vec.end(),[&](auto &a,auto &b){
            if(a[0]==b[0])return a[1]<b[1];
            else return a[0]>b[0];
        });
      
        for(auto &i:vec){
            ans.insert(ans.begin()+i[1],i);
  
        }
        
        
        
        
        
        
        return ans;
    }
};