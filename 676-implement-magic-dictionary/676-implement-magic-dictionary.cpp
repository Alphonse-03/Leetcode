struct Node
{
    Node* links[26];
    bool flag=false;
};

class MagicDictionary {
    private: Node* root=new Node();
public:
    MagicDictionary() {
        
    }
    void trie_Insert(string str)
    {
        Node* temp=root;
        for(auto &i:str)
        {
            if(temp->links[i-'a']==NULL)
            {
                temp->links[i-'a']=new Node();
            }
            temp=temp->links[i-'a'];
        }
        temp->flag=true;
    }
    
    void buildDict(vector<string> dict) {
        for(auto &i:dict)
        {
            trie_Insert(i);
        }
    }
    
    bool helper(string s,int i,bool change,Node* temp)
    {
        if(i==s.size())return change&&temp->flag;
        bool ans=false;
        for(int j=0;j<26;j++)
        {
            if(temp->links[j]!=NULL && s[i]-'a'==j)
            {
                ans=ans|helper(s,i+1,change,temp->links[j]);
            }
            else if(temp->links[j]!=NULL && change==false) ans=ans|helper(s,i+1,true,temp->links[j]);
        }
        return ans;
    }
    
    
    bool search(string s) {
        return helper(s,0,false,root);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */