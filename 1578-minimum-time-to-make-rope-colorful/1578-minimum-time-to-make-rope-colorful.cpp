class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int mi=neededTime[0];
        int sum=0;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i-1]==colors[i])
            {
                sum=neededTime[i-1];
                while(colors[i-1]==colors[i])
                {
                    mi=max({mi,neededTime[i]});
                    sum+=neededTime[i];
                    i++;
                }
                ans+=sum-mi;
            }
            mi=neededTime[i];
            
        }
        return ans;
    }
};