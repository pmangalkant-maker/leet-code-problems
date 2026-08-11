class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> prefix(n + 1, 0);

        for(int i = 0; i < bookings.size(); i++) {

            int first = bookings[i][0];
            int last = bookings[i][1];
            int seats = bookings[i][2];

            prefix[first - 1] += seats;
            prefix[last] -= seats;
        }

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i] + prefix[i - 1];
        }

        prefix.pop_back();

        return prefix;
    }
};