class Solution {
public:
    bool canChange(string start, string target) {
        int s1=0,s2=0;
        while(s1<start.size() && s2<target.size()){
            while(s1<start.size() && start[s1]=='_')s1++;
            while(s2<start.size() && target[s2]=='_')s2++;
            if(s1==start.size() && s2==target.size())return true;
            if(start[s1]!=target[s2])return false;
            if(start[s1]=='L' && s1<s2)return false;
            if(start[s1]=='R' && s1>s2)return false;
            s1++;
            s2++;
        }
        return true;
    }
};