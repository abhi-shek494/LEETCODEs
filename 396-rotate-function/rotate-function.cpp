class Solution {
public:
    void arrayRotate(vector<int>& nums){
        int n=nums.size();
        int temp=nums[n-1];
        for(int i=n-1; i>0; i--){
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
    }
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long F=0;

        for(int i=0; i<n; i++){
            sum+=nums[i];
            F+=1LL*nums[i]*i;
        }
        long long ans=F;
        for(int k=1; k<n; k++){
            F = F + sum - 1LL*n*nums[n-k];
            ans=max(ans, F);
        }
        return ans;
    }
};