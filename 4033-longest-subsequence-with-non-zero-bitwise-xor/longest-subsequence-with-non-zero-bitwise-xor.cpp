class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr=0;
        bool hasnonZero=false;
        for(int i=0; i<n; i++){
            xr^=nums[i];
            if(nums[i]!=0){
                hasnonZero=true;
            }
        }
        if(xr!=0){
            return n;
        }return hasnonZero?n-1:0;
    }
};