class Solution {
public:

//   vector<int> rearrangeBarcodes(vector<int>& b, int pos = 0) {
//   unordered_map<int, int> m;
//   set<pair<int, int>> s;
//   for (auto n : b) ++m[n];
//   for(auto &it:m) s.insert({ it.second, it.first });
//   for(auto &i:s) {
//     for (auto cnt = 0; cnt < i.first; ++cnt, pos += 2) {
//       if (pos >= b.size()) pos = 1;
//       b[pos] = i.second;
//     }
//   }
//   return b;
// }
    vector<int> rearrangeBarcodes(vector<int>& b, int pos = 0) {
  unordered_map<int, int> m;
  vector<pair<int, int>> s;
    
  for (auto n : b) ++m[n];
  for (auto &it:m) s.push_back({ it.second, it.first });
        sort(s.begin(),s.end(),[&](auto& a,auto& b){
        return a.first>b.first;
    });
  for (auto &i:s) {
    for (auto cnt = 0; cnt < i.first; ++cnt, pos += 2) {
      if (pos >= b.size()) pos = 1;
      b[pos] = i.second;
    }
  }
  return b;
}
};






