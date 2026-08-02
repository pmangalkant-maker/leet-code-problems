class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int less = 0;
        int equal = 0;

        for(int nums : nums) {
            if(nums < pivot) {
                less++;

            } else if (nums == pivot) {
                equal++;
            }
        }

        vector<int>ans(nums.size());

            int lessindex = 0;
            int equalindex = less;
            int greaterindex = less + equal;


            for(int nums : nums) {
                if(nums < pivot) {
                    ans[lessindex++] = nums;
                } else if(nums == pivot) {
                    ans[equalindex++] = nums;
                } else {
                    ans[greaterindex++] = nums;
                }
            }
        
        return ans;
        
    }
};