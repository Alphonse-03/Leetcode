/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*> qu;
        qu.push(root);
         vector<Node*> qu2;
        while(!qu.empty()){
           
            while(!qu.empty()){
                auto back=qu.front();
                qu.pop();
                if(back->left)qu2.push_back(back->left);
                if(back->right)qu2.push_back(back->right);
            }
            if(qu2.size()==0)break;
            if(qu2.size()!=0){
                qu.push(qu2[0]);
            }
            
            for(int i=0;i<(qu2.size()-1);i++){
               qu2[i]->next=qu2[i+1];
               qu.push(qu2[i+1]);
            }
            qu2={};
            
        }
        return root;
    }
};