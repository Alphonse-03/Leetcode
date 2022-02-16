typedef pair<int, pair<int, int>> PIII;
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        // one for next available chairs
        // always get the smallest chair
        priority_queue<int, vector<int>, greater<int>> available_chairs;
        for (int i=0; i<(int)times.size(); i++) {
            available_chairs.push(i);
        }
        
        // one for current occupied chairs
        // put the chairs back to the "available" chairs queue, 
        //  if current person's arrive time is > occupied chairs' leave time.
        priority_queue<PIII, vector<PIII>, greater<PIII>> occupied_chairs;   // <leaving time, <chair, friend>>
        
        // mark each friend
        vector<PIII> f_times;
        for (int i=0; i<(int)times.size(); i++) {
            // <arrive, <leave, friend>>
            f_times.push_back({times[i][0], {times[i][1], i}});
        }
        // sort by arrival time
        sort(f_times.begin(), f_times.end());
        
        
        for (auto t : f_times) {
            int arrival = t.first;
            int leaving = t.second.first;
            int fr = t.second.second;

            
            while (!occupied_chairs.empty() && occupied_chairs.top().first <= arrival) {

                int chair = occupied_chairs.top().second.first; 
                occupied_chairs.pop();
                available_chairs.push(chair);
            }
            int chair = available_chairs.top(); available_chairs.pop();

            PIII occupied_chair = make_pair(leaving, make_pair(chair, fr));
            occupied_chairs.push(occupied_chair);
            if (fr == targetFriend) {
                return occupied_chair.second.first;
            }
        }
        
        return 0;
    }
};