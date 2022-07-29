class Solution {
public:
//     vector<pair<int,int>> helper(string& str){
//         vector<pair<int,int>> patt;
//         unordered_map<char,int> mp;
//         int x=0;
//         int c=1;
//         int i=0;
        
//         while(i<str.size()){
//             if(mp.find(str[i])==mp.end()){
//                 mp[str[i]]=c;
//                 char x=str[i];
//                 int count=0;
//                 int t=i;
//                 while(i<str.size() && str[i]==x){
//                     count++;
//                     i++;
//                 }
//                 patt.push_back({c,count});
//                 mp[str[t]]=c;
//                 c++;
//             }
//             else{
//                 int a=mp[str[i]];
//                 char x=str[i];
//                 int count=0;
//                 while(i<str.size() && str[i]==x){
//                     count++;
//                     i++;
//                 }
//                 patt.push_back({a,count});
                
//             }
//         }
        
        
//         return patt;
//     }
    
    
    
    
    
//     vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
//         vector<string> ans;
//         vector<pair<int,int>> m=helper(pattern);
//         for(auto &i:words){
//             if(helper(i)==m)ans.push_back(i);
//         }
//         return ans;
//     }
      vector<string> findAndReplacePattern(vector<string> &words, string &p) {
        vector<string> res;
         string t=F(p);
        for (string& w : words) if (F(w) == t) res.push_back(w);
        return res;
    }

    string F(string w) {
        unordered_map<char, int> m;
        for (char c : w) if (!m.count(c)) m[c] = m.size();
        for (int i = 0; i < w.length(); ++i) w[i] = 'a' + m[w[i]];
        return w;
    }
};