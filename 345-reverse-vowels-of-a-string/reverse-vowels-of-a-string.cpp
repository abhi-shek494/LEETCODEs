class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.size()-1;
        while(r>l){
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if(!isVowel(s[l])){
                l++;
            }
            else{
                r--;
            }
        }
        return s;
    }
};