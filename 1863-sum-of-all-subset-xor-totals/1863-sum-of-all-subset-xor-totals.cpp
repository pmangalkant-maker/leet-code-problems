class Solution {
public:
    int ans = 0;

    void subsetXOR(int idx, vector<int>& nums, int currXor) {
        // Base Case
        if (idx == nums.size()) {
            ans += currXor;
            return;
        }

        // Include current element
        subsetXOR(idx + 1, nums, currXor ^ nums[idx]);

        // Exclude current element
        subsetXOR(idx + 1, nums, currXor);
    }

    int subsetXORSum(vector<int>& nums) {
        ans = 0;
        subsetXOR(0, nums, 0);
        return ans;
    }
};