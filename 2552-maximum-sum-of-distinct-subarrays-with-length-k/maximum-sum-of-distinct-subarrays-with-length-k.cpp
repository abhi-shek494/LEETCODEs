class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> freq;
        long long maxi=0;
        long long sum=0;
        int left=0;
        for(int right=0; right<n; right++){
            sum+=nums[right];
            freq[nums[right]]++;
            if(right-left+1>k){
                sum-=nums[left];
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                }
                left++;
            }
            if(right-left+1==k && freq.size()==k){
                maxi=max(maxi, sum);
            }
        }
        return maxi;
    }
};