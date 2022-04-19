class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans;
        ans.push_back({1});
        while(--num)
        {
            vector<int> temp;
            temp.push_back(1);
            vector<int> back=ans.back();
            for(int i=0;i<back.size()-1;i++)
            {
                temp.push_back(back[i]+back[i+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};