class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if(finalSum%2!=0)return {};
        vector<long long> ans;
        for(long long i=2;;i+=2)
        {
            if(finalSum<i)
            {
                long long x=ans.back();
                ans.pop_back();
                
                ans.push_back(finalSum+x);
                return ans;
            }
            else if(finalSum==i)
            {
                ans.push_back(i);
                return ans;
            }
            ans.push_back(i);
            finalSum-=i;
          //  i+=2;
        }
        return ans;
    }
};