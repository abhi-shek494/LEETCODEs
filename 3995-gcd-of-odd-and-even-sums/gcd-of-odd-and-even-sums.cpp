class Solution {
public:
    int gcd(int n, int m){
        int maxDiv=1;
        for(int i=2; i<min(m, n); i++){
            if(m%i==0 && n%i==0){
                maxDiv=i;
            }
        }
        return maxDiv;
    }
    int gcdOfOddEvenSums(int n) {
        int evenSum=0;
        int oddSum=0;
        for(int i=1; i<=2*n; i++){
            if(i%2==0){
                evenSum+=i;
            }
            if(i%2!=0){
                oddSum+=i;
            }
        }
        return gcd(evenSum, oddSum);
    }
};