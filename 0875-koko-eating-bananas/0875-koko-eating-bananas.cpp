class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int st = 1;
        int end = *max_element(piles.begin() , piles.end());
        
        

        while(st< end) {
            int mid = st + (end - st) /2;

            int hours = 0;

            for(int i = 0; i<n; i++) {
                 hours += (piles[i] + mid - 1) / mid;

            }

           

            if (hours <= h) {
                end = mid;

            } else {
                st = mid + 1;

            }
          

        }
           return st;
        
    }
};