class RangeFreqQuery {
public:
     unordered_map<int,vector<int>> mp;
    // RangeFreqQuery(vector<int>& arr) {
    //     for(int i=0;i<arr.size();i++){
    //         mp[arr[i]].push_back(i);
    //     }
    // }
    vector<int> nums;
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            nums.push_back(arr[i]);
            
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[arr[i]].push_back(i);
        }
        
    }
    
    int query(int left, int right, int element) {
   int a = lower_bound(mp[element].begin(),
                        mp[element].end(),
                        left)
            - mp[element].begin();
 
    int b = upper_bound(mp[element].begin(),
                        mp[element].end(),
                        right)
            - mp[element].begin();
 
    return b-a;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */