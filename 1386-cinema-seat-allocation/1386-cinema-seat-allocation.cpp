class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        // Initially assume every row can have 2 families
        int ans = 2LL * n;

        unordered_map<int, set<int>> mp;

        // Store reserved seats row-wise
        for (auto &v : reservedSeats) {
            mp[v[0]].insert(v[1]);
        }

        // Only process rows which have reservations
        for (auto &p : mp) {

            int row = p.first;
            set<int>& seats = p.second;

            // This row was counted as 2 initially
            ans -= 2;

            bool left = true;
            bool middle = true;
            bool right = true;

            // Check 2,3,4,5
            for (int seat = 2; seat <= 5; seat++) {
                if (seats.count(seat)) {
                    left = false;
                }
            }

            // Check 4,5,6,7
            for (int seat = 4; seat <= 7; seat++) {
                if (seats.count(seat)) {
                    middle = false;
                }
            }

            // Check 6,7,8,9
            for (int seat = 6; seat <= 9; seat++) {
                if (seats.count(seat)) {
                    right = false;
                }
            }

            // Left + Right can both be used
            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};