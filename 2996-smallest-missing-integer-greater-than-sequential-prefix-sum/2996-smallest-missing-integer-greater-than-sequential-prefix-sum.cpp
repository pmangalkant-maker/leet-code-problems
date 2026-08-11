// class Solution {
// public:
//     int missingInteger(vector<int>& nums) {
//         int n = nums.size();
//         int sum = 0;
//         for(int i  = 0; i<nums.size(); i++) {
//             if(nums[i] == nums[i-1] + 1) {
//                 sum += nums[i];
                    
//                 } else {
//                     break;
//                 }

//             for(int j = i; j < nums.size(); j++) {
//                 if(nums[i] == sum) {
//                 sum++;
//                 i = -1;   
//             }
                

//             }
//         }

//         return sum;
        
//     }
// };
class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];

        
        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

      
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == sum) {
                sum++;
                i = -1;   
            }
        }

        return sum;
    }
};