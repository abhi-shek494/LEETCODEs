class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans="";
        for(int i=0; i<n; i++){
            for(int j=i+k; j<=n; j++){
                string t=s.substr(i, j-i);
                int cnt = 0;
                for(char c:t) {
                    if(c == '1') {
                        cnt++;
                    }
                }
                if (cnt == k) {
                    int len = t.length();
                    if (ans.empty() || len < ans.length() || (len == ans.length() && t < ans)) {
                        ans = t;
                    }
                }
            }
        }
        return ans;
    }
};