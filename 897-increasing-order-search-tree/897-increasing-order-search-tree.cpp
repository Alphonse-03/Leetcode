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
    vector<TreeNode*> ans;
    void helper(TreeNode* root)
    {
        if(!root)return;
        helper(root->left);
        ans.push_back(root);
        helper(root->right);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        
        for(auto &i:ans)
        {
            i->left=NULL;
            i->right=NULL;
        }
        TreeNode* r=ans[0];
        TreeNode* anss=r;
        for(int i=1;i<ans.size();i++)
        {
            r->right=ans[i];
            r=r->right;
        }
        return anss;
    }
};