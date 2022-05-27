class Solution {
public:
    void helper(vector<vector<int>>& graph,vector<int>& temp,int i,vector<vector<int>>& ans){
        if(i==graph.size()-1){
            temp.push_back(i);
            ans.push_back(temp);
            return;
        }
        temp.push_back(i);
        for(auto &j:graph[i]){
            helper(graph,temp,j,ans);
            temp.pop_back();
        }
        
    }
    
    
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(graph,temp,0,ans);
        return ans;
    }
};