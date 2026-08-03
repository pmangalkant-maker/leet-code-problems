class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mincurr =nums[0];
        int minans = nums[0];
        int maxcurr = nums[0];
        int maxans = nums[0];

        for(int i = 1; i<nums.size(); i++) {
            maxcurr = max(nums[i], maxcurr + nums[i]);
               maxans = max(maxans, maxcurr);
            
            mincurr = min(nums[i], mincurr + nums[i]);
                minans = min(minans, mincurr);
        }
        
        return max(abs(maxans), abs(minans));
        
       

        
        
    }
};