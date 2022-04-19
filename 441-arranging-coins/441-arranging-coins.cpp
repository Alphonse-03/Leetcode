class Solution {
public:
    
    bool poss(long long n,int k)
    {
        if(n*(n+1)/2>k)return false;
        return true;
    }
    
    
    int arrangeCoins(int n) {
        int s=1;
        int e=n;
        while(s<=e)
        {
            long long mid=s+(e-s)/2;
            if(poss(mid,n))s=mid+1;
            else e=mid-1;
        }
        return e;
    }
};