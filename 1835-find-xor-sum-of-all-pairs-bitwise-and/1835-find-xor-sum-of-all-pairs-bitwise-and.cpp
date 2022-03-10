class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int xora=0;
        for(auto &i:arr1)xora^=i;
        int ans=0;
        for(auto &i:arr2)ans^=i&xora;
        return ans;
    }
};