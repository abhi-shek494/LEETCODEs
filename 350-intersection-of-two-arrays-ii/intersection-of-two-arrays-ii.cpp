class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i: nums1){
            map[i]++;
        }
        for(int j: nums2){
            if(map[j]>0){
                ans.push_back(j);
                map[j]--;
            }
        }
        return ans;
    }
};