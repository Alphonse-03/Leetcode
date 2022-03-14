class Solution {
public:
    int reverse(int x) {
        vector<int> dig;
        bool neg=false;
        if(x<0)neg=true;
        x=abs(x);
        while(x)
        {
            dig.push_back(x%10);
            x/=10;
        }
        long long ans=0;
        for(auto &i:dig)
        {
            ans*=10;
            ans+=i;
        }
        if(ans>pow(2,31)-1 || ans<-1*pow(2,31))return 0;
        if(neg)return -1*ans;
        return ans;
    }
};