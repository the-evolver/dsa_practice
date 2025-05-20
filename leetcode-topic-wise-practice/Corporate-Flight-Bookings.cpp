class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> diff(n+1,0);
        for(int i = 0 ; i < bookings.size() ; i++){
            int lft = bookings[i][0];
            int rgt = bookings[i][1];
            int cnt = bookings[i][2];
            diff[lft - 1] += cnt;
            diff[rgt] -= cnt;
        }
        int prefix = 0;
        for(int i = 0 ; i < n ; i++){
            prefix += diff[i];
            diff[i] = prefix;
        }
        diff.erase(diff.end());
        return diff;
        
    }
};