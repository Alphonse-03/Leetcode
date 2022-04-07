class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1)
        {
            int b1=pq.top();
            pq.pop();
            int b2=pq.top();
            pq.pop();
            if(b1==b2 && pq.size()==0)return 0;
            if(b1==b2 )continue;
            else pq.push(b1-b2);
        }
        return pq.top();
    }
};