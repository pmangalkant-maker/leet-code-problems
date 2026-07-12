class Solution {
public:

    void solve(int i, vector<int>& nums, vector<int>& ans,
               vector<vector<int>>& allSubsets) {

        if (i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        // Include current element
        ans.push_back(nums[i]);
        solve(i + 1, nums, ans, allSubsets);
        ans.pop_back();

        // Skip all duplicates before taking the "exclude" branch
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }

        // Exclude current element
        solve(i + 1, nums, ans, allSubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;

        solve(0, nums, ans, allSubsets);

        return allSubsets;
    }
};