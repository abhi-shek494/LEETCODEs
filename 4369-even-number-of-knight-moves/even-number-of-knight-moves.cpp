class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int st=start[0]+start[1];
        int tg=target[0]+target[1];
        if(st% 2 == tg%2){
            return true;
        }
        else{
            return false;
        }

    }
};