class Solution {
public:
    bool isVowel(char x){
        if(x=='a' || x=='e' ||x=='i' || x=='o' || x=='u' || x=='A' || x=='E' ||x=='I' || x=='O' || x=='U'){
            return true;
        }
        else{
            return false;
        }
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        int maxCount=count;
        for(int i=k; i<s.size(); i++){
            if(isVowel(s[i-k])){
                count--;
            }
            if(isVowel(s[i])){
                count++;
            }
            if(maxCount<count){
                maxCount=count;
            }
        }
        return maxCount;
    }
};