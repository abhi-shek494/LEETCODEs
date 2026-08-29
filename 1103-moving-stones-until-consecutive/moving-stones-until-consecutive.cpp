class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> arr={a, b, c};
        sort(arr.begin(), arr.end());
        if(arr[2]-arr[0]==2){
            return {0, 0};
        }
        int minmoves=2;
        if(arr[2]-arr[1] <=2 || arr[1]-arr[0]<=2){
            minmoves=1;
        }
        int maxmoves=2;
        maxmoves=(arr[1]-arr[0]-1) + (arr[2]-arr[1]-1);
        return {minmoves, maxmoves};
    }
};