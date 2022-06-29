class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
         auto comp = [](auto& p1, auto& p2)
                    { return p1[0] > p2[0] || (p1[0] == p2[0] && p1[1] < p2[1]); };
        sort(people.begin(), people.end(), comp);
        vector<vector<int>> res;
        for (auto& p : people) 
            res.insert(res.begin() + p[1], p);
        return res;
     
    }
};