class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxi = 0;

        // maximum candies find karo
        for(int i = 0; i < candies.size(); i++) {
            maxi = max(maxi, candies[i]);
        }

        vector<bool> ans;

        // har kid ko extra candies dekar check karo
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxi) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};