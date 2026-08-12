class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            // 1. Window ke bahar wale index ko remove karo
            while(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // 2. Chhote elements ko remove karo
            while(!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            // 3. Current index add karo
            dq.push_back(i);

            // 4. Window complete hone ke baad answer
            if(i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};