class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        long long sum=accumulate(card.begin(),card.end(),(long long)0);
        long long winsum=accumulate(card.begin(),card.begin()+k,(long long)0);
        long long not_included=sum-winsum;
        int n=card.size();
        for(int i=k-1;i>=0;i--){
            not_included+=card[i];
            not_included-=card[--n];
            winsum=max(winsum,sum-not_included);
        }
        return winsum;
    }
};