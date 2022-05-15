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
    int maxdepth=0;
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        helper(root,0);
        return sum;
    }
    void helper(TreeNode* root,int current)
    {
        if(root!=NULL)
        {
            if(current>maxdepth)
            {
                sum=0;
                maxdepth=current;
            }
            if(current==maxdepth)
            {
                sum+=root->val;
            }
            helper(root->left,current+1);
            helper(root->right,current+1);
        }
    }
};















