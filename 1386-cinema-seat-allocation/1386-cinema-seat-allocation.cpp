class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        long long ans = 2LL * n;

        // row -> reserved seats ka bitmask
        unordered_map<int, int> mp;

        for (auto &v : reservedSeats) {
            int row = v[0];
            int seat = v[1];

            // seat ko mark kar do
            mp[row] |= (1 << seat);
        }

        for (auto &p : mp) {

            int row = p.first;
            int mask = p.second;

            // Is row ko initially 2 families count kiya tha
            ans -= 2;

            bool left = true;
            bool middle = true;
            bool right = true;

            // 2,3,4,5
            for (int seat = 2; seat <= 5; seat++) {
                if (mask & (1 << seat)) {
                    left = false;
                }
            }

            // 4,5,6,7
            for (int seat = 4; seat <= 7; seat++) {
                if (mask & (1 << seat)) {
                    middle = false;
                }
            }

            // 6,7,8,9
            for (int seat = 6; seat <= 9; seat++) {
                if (mask & (1 << seat)) {
                    right = false;
                }
            }

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