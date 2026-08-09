// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         int st =   0;
//         int end = n - 1;
//         int first = -1;
//         int last = -1;

//         while(st <= end) {
//           int  mid = st + (end - st) / 2;

//             if(nums[mid] ==  target) {
//                 first = mid;
//                 // return {mid , mid};
//                 end = mid - 1; 
//             } else if(nums[mid] < target) {
//                 st = mid + 1;

//         } else {
//             end = mid -1 ;
//         }
//         }

//         // return {-1,-1};
//          int st =   0;
//         int end = n - 1;

//         while(st <= end) {
//           int  mid = st + (end - st) / 2;

//             if(nums[mid] ==  target) {
//                 last = mid;
//                 // return {mid , mid};
//                 end = mid - 1; 
//             } else if(nums[mid] < target) {
//                 st = mid + 1;

//         } else {
//             end = mid -1 ;
//         }
//         }
//         return {-1,-1};
        
//     }
// };
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;

        int first = -1;
        int last = -1;

        // First occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;   // left side me aur target ho sakta hai
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        // reset
        st = 0;
        end = n - 1;

        // Last occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                last = mid;
                st = mid + 1;    // right side me aur target ho sakta hai
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};
