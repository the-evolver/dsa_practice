class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int> diff(1001,0);
        int left = 1001;
        int right = -1;
        for(int i = 0 ; i < trips.size(); i++){
            int numP = trips[i][0];
            int pickUp = trips[i][1];
            int dropOff = trips[i][2];
            diff[pickUp] += numP;
            diff[dropOff] -= numP;
            left = min(left,pickUp);
            right = max(right,dropOff);

        }
        int prefix = 0;
        for(int i = left ; i <= right ; i++){
            prefix += diff[i];
            if(prefix > capacity)
                return false;
        }
        return true;
        
    }
};