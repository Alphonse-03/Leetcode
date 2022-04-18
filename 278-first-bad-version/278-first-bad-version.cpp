// The API isBadVersion is defined for you.
// bool author_id(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1;
        int e=n;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isBadVersion(mid) && isBadVersion(mid-1)==false)return mid;
            if(isBadVersion(mid))e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
};