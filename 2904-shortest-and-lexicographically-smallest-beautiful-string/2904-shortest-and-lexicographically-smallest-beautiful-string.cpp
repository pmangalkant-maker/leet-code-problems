class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int left = 0;
        int count = 0;

        int minLen = INT_MAX;
        string ans = "";

        for(int right = 0; right < s.size(); right++) {

            if(s[right] == '1') {
                count++;
            }

            while(count == k) {

                int len = right - left + 1;
                string curr = s.substr(left, len);

                if(len < minLen || 
                   (len == minLen && curr < ans)) {
                    
                    minLen = len;
                    ans = curr;
                }

                // window shrink
                if(s[left] == '1') {
                    count--;
                }

                left++;
            }
        }

        return ans;
    }
};