class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for(int x: set1){
            if(!set2.count(x)){
                ans[0].push_back(x);
            }
        }

        for(int y: set2){
            if(!set1.count(y)){
                ans[1].push_back(y);
            }
        }
        return ans;
    }
};