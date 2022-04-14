class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& q, int l) {
        vector<long long> ans;
        for(auto &i:q)
        {
            int half=(l+1)/2;
            string temp="";
            int start=pow(10,half-1)+i-1;
            temp=to_string(start);
            if(temp.size()>half){ans.push_back(-1);continue;}
            if(l%2==0)
            {
                string j=temp;
                reverse(j.begin(),j.end());
                temp+=j;
                ans.push_back(stoll(temp));
            }
            else
            {
                
                string j=temp;
                temp.pop_back();
                reverse(temp.begin(),temp.end());
                j+=temp;
                ans.push_back(stoll(j));
            }
        }
        return ans;
    }
};