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
    // void helper(vector<int>& ans,TreeNode* root){
    //     if(!root)return;
    //     ans.push_back(root->val);
    //     if(!root->right)helper(ans,root->left);
    //     helper(ans,root->right);
    // }
    
    
    
    
    vector<int> rightSideView(TreeNode* root) {
        // vector<int> ans;
        // helper(ans,root);
        // return ans;
        vector<int> ans;
        if(!root)return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int s=qu.size();
            int last;
            while(s--){
                auto back=qu.front();
                qu.pop();
                if(back->left)qu.push(back->left);
                if(back->right)qu.push(back->right);
                last=back->val;
            }
            ans.push_back(last);
            
        }
        return ans;
        
        
    }
};





