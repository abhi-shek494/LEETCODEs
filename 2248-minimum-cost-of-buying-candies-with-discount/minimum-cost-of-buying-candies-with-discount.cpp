class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(), cost.end(), greater<>());
        int sum=0;
        for(int i=0; i<n; i++){
            if(i%3==2){
                sum+=0;
            }
            else{
                sum+=cost[i];
            }
        }
        return sum;
    }
};