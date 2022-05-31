class Solution {
public:
    
    bool hasAllCodes(string s, int k) {
        
        unordered_set<string> st;
        int j=s.size();
        for(int i=0;i<=j-k;i++){
            string x=s.substr(i,k);
            st.insert(x);
        }
        if(st.size()==pow(2,k))return true;
        return false;
        
    }
};







