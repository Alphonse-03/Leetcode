struct Node
{
    Node* links[26];
    bool flag=false;
    
    bool check(char ch)
    {
        return (links[ch-'a']!=NULL);
    }
    void insert(char ch)
    {
        links[ch-'a']=new Node();
    }
};

class trie
{
    private:Node* root=new Node();
    public:
    void trie_insert(string &str)
    {
        Node* temp=root;
        for(auto &s:str)
        {
            if(temp->check(s)==false)
            {
                temp->insert(s);
            }
            temp=temp->links[s-'a'];
        }
        temp->flag=true;
    }
    
    void solver(string &str,vector<string>& ans,int i,string t,Node* temp)
    {
        if(i>=str.size()){t="";return ;}
       
        if(temp->flag==true)
        {
            t.push_back(' ');
            solver(str,ans,i,t,root);
            t.pop_back();
        }
        if(i==str.size()-1 && (temp->check(str[i])))
        {
            t.push_back(str[i]);
            if(temp->links[str[i]-'a']->flag==true)ans.push_back(t);
            t=""; 
            return;
        }
        for(int j=0;j<26;j++)
        {
            if(temp->links[j]!=NULL && str[i]-'a'==j)
            {
                t.push_back(str[i]);
                temp=temp->links[j];
                solver(str,ans,i+1,t,temp);
            }
        }
        
    }
    
    vector<string> helper(string &str)
    {
        vector<string> ans;
        string t="";
        solver(str,ans,0,t,root);
        return ans;
        
    }
    
};

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& word) {
        trie t;    
        for(auto &w:word)
        {
            t.trie_insert(w);
        }
        
        return t.helper(s);
    }
};