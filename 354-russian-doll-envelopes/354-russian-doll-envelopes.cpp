class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),[&](auto & a,auto &b){
            if(a[0]!=b[0])return a[0]<b[0];
            else return a[1]>b[1];
        });
        
        vector<int> lis;
        for(auto &i:arr){
            int idx=lower_bound(lis.begin(),lis.end(),i[1])-lis.begin();
            if(idx>=lis.size())lis.push_back(i[1]);
            else lis[idx]=i[1];
        }
        return lis.size();
            
    }
};