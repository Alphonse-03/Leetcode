class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
       int s=0,e=l.size()-1;
        if(l[0]>target)return l[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(l[mid]==target)
            {
                if(mid==l.size()-1)return l[0];
                s=mid-1;
            }
            if(l[mid]>target && mid!=0 && l[mid-1]<=target)return l[mid];
            if(mid==l.size()-1 && l[mid]<target)return l[0];
            if(l[mid]>target)
            {
                e=mid-1;
            }
            else s=mid+1;
            
        }
        return ';';
    }
};