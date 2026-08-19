class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> st;
        for(auto &x : reservedSeats){
            st[x[0]].insert(x[1]);
        }
        int ans=(n-st.size())*2;
        for(auto &[x, y]: st){
            bool left=true;
            bool right=true;
            bool mid=true;
            for(int s: y){
                if(s>= 2 && s<=5){
                    left=false;
                }
                if(s>= 4 && s<=7){
                    mid=false;
                }
                if(s>= 6 && s<=9){
                    right=false;
                }
            }
            if(left && right){
                ans+=2;
            }
            else if(left || right || mid){
                ans+=1;
            }
        }
        return ans;
    }
};