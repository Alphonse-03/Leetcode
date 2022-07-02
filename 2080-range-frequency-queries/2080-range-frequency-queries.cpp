class RangeFreqQuery {
public:
//     unordered_map<int,vector<int>> mp;
//     RangeFreqQuery(vector<int>& arr) {
//         for(int i=0;i<arr.size();i++){
//             mp[arr[i]].push_back(i);
//         }
//     }
    
//     int query(int left, int right, int value) {
//         vector<int> back=mp[value];
//         int st=lower_bound(back.begin(),back.end(),left)-back.begin();
//         int ed=upper_bound(back.begin(),back.end(),right)-back.begin();
//         return ed-st;
//     }
    
    
    
       unordered_map< int, vector<int> > stock;
    int findFrequency(vector<int>& nums, int left,
                      int right, int element)
    {
   
    int a = lower_bound(stock[element].begin(),
                        stock[element].end(),
                        left)
            - stock[element].begin();
 
    int b = upper_bound(stock[element].begin(),
                        stock[element].end(),
                        right)
            - stock[element].begin();
 
    return b-a;
    }
    
    
    vector<int> nums;
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            nums.push_back(arr[i]);
            
        }
        for(int i=0;i<nums.size();i++)
        {
            stock[arr[i]].push_back(i);
        }
        
    }
    
    int query(int left, int right, int value) {
        return findFrequency(nums,left,right,value);
    }
};


/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */