struct Node
{
    Node* links[26];
    bool flag=false;
};

class Solution {
    private: Node* root=new Node();
public:
    
    void trie_insert(string &i)
    {
        Node* temp=root;
        for(auto &j:i)
        {
            if(temp->links[j-'a']==NULL)
            {
                temp->links[j-'a']=new Node();
            }
            temp=temp->links[j-'a'];
        }
        temp->flag=true;
    }
    
    
    
    string check_pref(string &str,Node* temp,int i,string &g)
    {
        
        if(temp->flag==true)return g;
        if(i>=str.size())return " ";
        if(temp->links[str[i]-'a']==NULL)return " ";
        g.push_back(str[i]);
        return check_pref(str,temp->links[str[i]-'a'],i+1,g);
    }
    
    
    string replaceWords(vector<string>& dict, string str) {
        
        for(auto &i:dict)
        {
            trie_insert(i);
        }
        string ans="";
        string temp="";
        for(auto &i:str)
        {
            if(i==' ')
            {
                string g="";
                string x=check_pref(temp,root,0,g);
                if(x!=" ")
                {
                    ans+=x;
                    ans.push_back(' ');
                }
                else
                {
                    ans+=temp;
                    ans.push_back(' ');
                }
                temp="";
            }
            else
            {
                temp.push_back(i);
            }
        }
        string g="";
        string x=check_pref(temp,root,0,g);
        if(x!=" ")
        {
            ans+=x;
        }
        else
        {
            ans+=temp;
        }
        return ans;
    }
};