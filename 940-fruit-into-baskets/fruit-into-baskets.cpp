class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int, int> mp;
        int left=0;
        int mx=0;
        for(int right=0; right<fruits.size(); right++){
            mp[fruits[right]]++;
            while(mp.size()>2){
                int left_fruit=fruits[left];
                mp[left_fruit]--;
                if(mp[left_fruit]==0){
                    mp.erase(left_fruit);
                }
                left++;
            }
            mx=max(mx, right-left+1);
        }
        return mx;
    }
};