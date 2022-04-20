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
class BSTIterator {
public:
    TreeNode* start=NULL;
    BSTIterator(TreeNode* root) {
        TreeNode* temp;
        TreeNode* temp2;
        while(root)
        {
            if(root->left)
            {
                temp=root->left;
                while(temp->right)
                {
                    temp=temp->right;
                }
                temp->right=root;
                temp=root->left;
                root->left=NULL;
                root=temp;
                if(start!=NULL)
                {
                    temp2->right=root;
                }
            }
            else
            {
                if(start==NULL)
                {
                    start=root;
                }
                temp2=root;
                root=root->right;
            }
        }
    }
    
    
    int next() {
        int x=start->val;
        start=start->right;
        return x;
    }
    
    bool hasNext() {
        return start!=NULL;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */