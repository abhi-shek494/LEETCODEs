class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int count=0;
        int i=0;
        for(char x:t){
            if(s[i]==x && i<n){
                count++;
                i++;
            }
        }
        return (count==n)?true:false;
    }
};