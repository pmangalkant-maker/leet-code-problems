class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        //--------------first approch---------------//
        // int ans = 0;

        // for (int i = 0; i < n; i++) {
        //     int mn = heights[i];

        //     for (int j = i; j < n; j++) {
        //         mn = min(mn, heights[j]);      // window ka minimum height
        //         ans = max(ans, mn * (j - i + 1));
        //     }
        // }

        // return ans;
//        //----------------second approch-----------------//
//

        vector<int> left(n), right(n);
        stack<int> s;

        // Nearest Smaller Right
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        // Nearest Smaller Left
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            ans = max(ans, heights[i] * width);
        }

        return ans;
    
};
    
};