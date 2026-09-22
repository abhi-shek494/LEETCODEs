class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int i=1;
        for(char ch:s){
            int prod=i*('z' - ch + 1);
            sum+=prod;
            i++;
        }
        return sum;
    }
};