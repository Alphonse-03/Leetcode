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
 *
0-have a camera
-1-need a camera
1-covered
 
 */


class Solution {
public:
    
    int ans=0;
    int helper(TreeNode* root,int camera){
        if(root==NULL)return 1;
        
        int l=helper(root->left,camera);
        int r=helper(root->right,camera);
        
        
        if(l==-1 || r==-1){
            ans++;
            return 0;
        }
        
        else if(l==0 || r==0){
            return 1;
        }
        return -1;
          
        
    }
    
    int minCameraCover(TreeNode* root) {
        return helper(root,-1)==-1?++ans:ans;
    }
};











