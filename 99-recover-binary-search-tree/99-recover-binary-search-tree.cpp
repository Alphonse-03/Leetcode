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
    TreeNode* a=NULL;
    TreeNode* b=NULL;
      
    
    void recoverTree(TreeNode* root) {
        TreeNode* temp;
       TreeNode* prev=NULL;
       
       
        while(root)
        {
            if(root->left)
            {
                temp=root->left;
                while(temp->right!=NULL && temp->right!=root)
                {
                    temp=temp->right;
                }
                if(temp->right==NULL)
                {
                    temp->right=root;
                    root=root->left;  
                }
                else{
                    if(prev && root)
                    {if(prev->val>root->val)
                    {
                        if(a==NULL){a=prev;b=root;}
                        else{b=root;}
                    }}
                    prev=root;
                    root=root->right;
                    temp->right=NULL;
                    
                }
            }
            else{
                if(prev==NULL)
                {
                    prev=root;
                }
                if(prev->val>root->val)
                {
                    if(a==NULL){a=prev;b=root;}
                    else{b=root;}
                }
                prev=root;
                root=root->right;
            }
        }
        if(a!= NULL && b != NULL){
		    int t = a->val;
		    a->val = b->val;
		    b->val = t;
		}
    }
};






























