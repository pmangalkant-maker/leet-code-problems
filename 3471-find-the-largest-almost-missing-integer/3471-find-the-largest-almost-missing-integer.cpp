class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Har possible window
        for(int i = 0; i <= nums.size() - k; i++) {

            unordered_map<int, int> mp;

            // Current window ke elements
            for(int j = i; j < i + k; j++) {
                mp[nums[j]]++;
            }

            // Current window me jo numbers hain
            for(auto it = mp.begin(); it != mp.end(); it++) {
                freq[it->first]++;
            }
        }

        int ans = -1;

        for(auto it = freq.begin(); it != freq.end(); it++) {
            if(it->second == 1) {
                ans = max(ans, it->first);
            }
        }

        return ans;
    }
};