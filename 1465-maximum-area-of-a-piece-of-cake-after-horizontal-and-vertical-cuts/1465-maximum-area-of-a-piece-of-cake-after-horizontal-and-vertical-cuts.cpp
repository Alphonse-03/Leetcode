
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
        hor.push_back(0);
        hor.push_back(h);
        ver.push_back(0);
        ver.push_back(w);
        int mxd1=0;
        sort(hor.begin(),hor.end());
        sort(ver.begin(),ver.end());
        for(int i=1;i<hor.size();i++){
            mxd1=max(mxd1,(hor[i]-hor[i-1]));
        }
        int mxd2=0;
        for(int i=1;i<ver.size();i++){
            mxd2=max(mxd2,(ver[i]-ver[i-1]));
        }
        unsigned long long ans=((long long)mxd1*(long long)mxd2)%1000000007;
        return ans;
    }
};