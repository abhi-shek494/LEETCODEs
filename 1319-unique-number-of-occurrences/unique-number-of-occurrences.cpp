class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counts;
        for(int x: arr){
            counts[x]++;
        }
        unordered_set<int> seen;
        for(auto& y:counts){
            if(seen.count(y.second)){
                return false;
            }
            seen.insert(y.second);
        }
        return true;
    }
};