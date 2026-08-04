class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n%2 != 0) {
        //     return false;
        // } else {
        //     return true;
        // } //----------ek he test case reh gya tha-----------//

         if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n = n / 2;
        }

        if (n == 1) {
            return true;
        } else {
            return false;
        }
        
    }
};