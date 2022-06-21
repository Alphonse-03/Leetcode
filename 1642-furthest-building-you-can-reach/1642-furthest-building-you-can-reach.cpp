class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        int curr=0;
        priority_queue<int> pq;
        
        for(int i=1;i<heights.size();i++)
        {
            if(heights[i-1]<heights[i])
            {
                int diff=heights[i]-heights[i-1];
                if(diff<=bricks)
                {
                    bricks-=diff;
                    pq.push(diff);
                }
                else if(ladders>0)
                {
                    if(pq.size() && pq.top()>diff)
                    {
                        bricks+=pq.top()-diff;
                        pq.push(diff);
                        pq.pop();
                        ladders--;
                    }
                    else
                    {
                        ladders--;
                    }
                }
                else
                {
                    return i-1;
                }
                
            }
          //  curr++;
        }
        return n-1;
    }
};