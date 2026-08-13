class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int> freq;
      

        for(int i = 0; i< s.size(); i++) {
            freq[s[i]]++;

        }

        string ans = "";
        while(freq['z'] > 0) {
    ans += '0';

    freq['z']--;
    freq['e']--;
    freq['r']--;
    freq['o']--;
}
        while(freq['w'] > 0) {
            ans += '2';

            freq['t']--;
            freq['w']--;
            freq['o']--;
        }

        // 4 -> four
        while(freq['u'] > 0) {
            ans += '4';

            freq['f']--;
            freq['o']--;
            freq['u']--;
            freq['r']--;
        }

        // 6 -> six
        while(freq['x'] > 0) {
            ans += '6';

            freq['s']--;
            freq['i']--;
            freq['x']--;
        }

        // 8 -> eight
        while(freq['g'] > 0) {
            ans += '8';

            freq['e']--;
            freq['i']--;
            freq['g']--;
            freq['h']--;
            freq['t']--;
        }
            // 1 -> one
        while(freq['o'] > 0) {
            ans += '1';

            freq['o']--;
            freq['n']--;
            freq['e']--;
        }

        // 3 -> three
        while(freq['t'] > 0) {
            ans += '3';

            freq['t']--;
            freq['h']--;
            freq['r']--;
            freq['e']--;
            freq['e']--;
        }

        // 5 -> five
        while(freq['f'] > 0) {
            ans += '5';

            freq['f']--;
            freq['i']--;
            freq['v']--;
            freq['e']--;
        }

        // 7 -> seven
        while(freq['s'] > 0) {
            ans += '7';

            freq['s']--;
            freq['e']--;
            freq['v']--;
            freq['e']--;
            freq['n']--;
        }

        // 9 -> nine
        while(freq['i'] > 0) {
            ans += '9';

            freq['n']--;
            freq['i']--;
            freq['n']--;
            freq['e']--;
        }

        // Digits must be returned in sorted order
        sort(ans.begin(), ans.end());

        return ans;
        
    }
};