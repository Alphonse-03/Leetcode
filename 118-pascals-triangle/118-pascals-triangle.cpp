class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        arr.push_back({1});
        while(--numRows)
        {
            vector<int> back=arr.back();
            vector<int> temp{1};
            for(int i=0;i<back.size()-1;i++)
            {
                temp.push_back(back[i]+back[i+1]);
            }
            temp.push_back(1);
            arr.push_back(temp);
        }
        return arr;
    }
};