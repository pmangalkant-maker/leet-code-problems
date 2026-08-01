class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];

        // Prefix sum
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        // Check pivot index
        for (int i = 0; i < n; i++) {
            int leftSum;
            int rightSum;

            if (i == 0)
                leftSum = 0;
            else
                leftSum = prefix[i - 1];

            rightSum = prefix[n - 1] - prefix[i];

            if (leftSum == rightSum)
                return i;
        }

        return -1;
    }
};