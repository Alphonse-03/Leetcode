class Solution {
public:
    //not done by me
   static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        unordered_map<string, int> dp;
        int res = 0;
        for (string w : words) {
            for (int i = 0; i < w.length(); i++) {
                string pre = w.substr(0, i) + w.substr(i + 1);
                dp[w] = max(dp[w], dp.find(pre) == dp.end() ? 1 : dp[pre] + 1);
            }
            res = max(res, dp[w]);
        }
        return res;
    }
};



















//  int helper(map<string,int>& mp,string lar,int mn)
//     {
//         if(lar.size()==mn)return 1;
        
//         string test="";
//         int ans=INT_MIN;
//         for(int i=0;i<lar.size();i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 test.push_back(lar[j]);
//             }
//             for(int k=i+1;k<lar.size();k++)
//             {
//                 test.push_back(lar[k]);
//             }
//             if(mp.find(test)!=mp.end())
//             {
//                 ans=max(ans,1+helper(mp,test,mn));
//             }
//             test="";
//         }
//         return ans;
//     }
    
       
//     int longestStrChain(vector<string>& words) {
//         map<string,int> mp;
//         int mn=INT_MAX;
//         for(auto i:words)
//         {
//             mp[i]++;
//             if(i.size()<mn)
//             {
//                 mn=i.size();
//             }
//         }
//         int ans=INT_MIN;
//         for(auto i:words)
//         {
//             ans=max(ans,helper(mp,i,mn));
//         }
//         return ans;   
//     }