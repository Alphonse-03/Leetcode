class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& seg) {
        int p=1e5+2;
        vector<long long> sum(p,0);
        vector<bool> change(p,false);
        for(auto &i:seg)
        {
            sum[i[0]]+=i[2];
            sum[i[1]]-=i[2];
            change[i[0]]=change[i[1]]=true;
        }
        long long last=0;
        long long s=0;
        vector<vector<long long>> ans;
        for(int i=1;i<sum.size();i++)
        {
            if(s!=0 && change[i])
            {
                ans.push_back({last,i,s});
            }
            if(change[i])
            {
                last=i;
                s+=sum[i];
            }
        }
        return ans;
        
    }
};