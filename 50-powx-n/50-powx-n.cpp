class Solution {
public:
    
    double helper(double x,long long p)
    {
        if(p==0)return 1;
        //if(p==1)return x;
        if(p%2==0)return helper(x*x,p/2);
        else return x*helper(x*x,p/2);
    }

    
    
    double myPow(double x, int n) {
        long long p=n;
        double ans= helper(x,p);
        if(n<0)return 1/ans;
        return ans;
    }
 };
