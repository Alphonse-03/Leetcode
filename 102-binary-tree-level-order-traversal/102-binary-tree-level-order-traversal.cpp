/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qu;
        vector<vector<int>> ans;
        if(root)qu.push(root);
        while(!qu.empty()){
            int s=qu.size();
            vector<int> temp;
            while(s--){
                auto back=qu.front();
                qu.pop();
                temp.push_back(back->val);
                if(back->left)qu.push(back->left);
                if(back->right)qu.push(back->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};