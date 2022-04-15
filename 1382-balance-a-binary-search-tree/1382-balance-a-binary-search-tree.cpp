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
    
    void inorder(TreeNode* root,vector<TreeNode*>& t)
    {
        if(!root)return ;
        inorder(root->left,t);
        t.push_back(root);
        inorder(root->right,t);
    }
    
    TreeNode* construct(int s,int e,vector<TreeNode*>& in)
    {
        if(s>e)return NULL;
        int mid=(s+e)/2;
        TreeNode* root=in[mid];
        root->left=construct(s,mid-1,in);
        root->right=construct(mid+1,e,in);
        return root;
    }

    
    
    
    
    
    
    
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> in;
        inorder(root,in);
        int e=in.size()-1;
        return construct(0,e,in);
    }
};