class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truck) {
        sort(box.begin(),box.end(),[&](auto &a,auto &b){
            return a[1]>b[1];
        });
        int ans=0;
        for(auto &i:box){
            if(truck<=i[0]){
                ans+=truck*i[1];
                return ans;
            }
            ans+=i[0]*i[1];
            truck-=i[0];
        }
        return ans;
    }
};

