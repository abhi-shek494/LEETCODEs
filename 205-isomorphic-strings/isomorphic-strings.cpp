class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> S(256, -1);
        vector<int> T(256, -1);
        for(int i=0; i<s.size(); i++){
            if(S[s[i]] != T[t[i]]){
                return false;
            }
            S[s[i]]=i;
            T[t[i]]=i;
        }
        return true;
    }
};