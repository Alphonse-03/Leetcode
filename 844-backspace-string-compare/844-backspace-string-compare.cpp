class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st1;
        stack<int> st2;
        for(auto &i:s){
            if(i=='#'){
                if(st1.empty())continue;
                st1.pop();
            }
            else st1.push(i);
        }
        for(auto &i:t){
             if(i=='#'){
                if(st2.empty())continue;
                st2.pop();
            }
            else st2.push(i);
        }
        return st1==st2;
    }
};