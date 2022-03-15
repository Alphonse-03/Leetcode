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
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        unordered_map<int,TreeNode*> nodes;
        unordered_map<int,bool> check;
        for(auto &i:arr)
        {
            if(nodes.find(i[0])==nodes.end())
            {
                nodes[i[0]]=new TreeNode(i[0]);
            }
            
            if(nodes.find(i[1])==nodes.end())
            {
                nodes[i[1]]=new TreeNode(i[1]);
            }
            if(i[2]==1)
            {
                nodes[i[0]]->left=nodes[i[1]];      
            }else
            {
                nodes[i[0]]->right=nodes[i[1]];    
            }
            check[i[1]]=true;
        }
        for(auto &i:nodes)
        {
            if(check[i.first]!=true)return nodes[i.first];
        }
        return new TreeNode(-1);
    }
};











