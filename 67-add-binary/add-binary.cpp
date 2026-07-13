class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        int n=a.size()-1;
        int m=b.size()-1;
        while(n>=0 || m>=0 || carry){
            int csum = carry;
            if(n>=0){
                csum += a[n] - '0';
                n--;
            }
            if(m>=0){
                csum+=b[m] - '0';
                m--;
            }
            ans+=(csum%2)+'0';
            carry=csum/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};