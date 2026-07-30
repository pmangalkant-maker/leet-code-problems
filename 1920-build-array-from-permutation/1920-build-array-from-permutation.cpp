class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // int ans = 0;
         int n = nums.size();
         vector<int> ans;
        // sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++) {
            ans.push_back(nums[nums[i] ]);
        }
        return ans;
        
    }
};