class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        unordered_map<char, int> freq;

        // First string ki frequency
        for(char c : words[0]) {
            freq[c]++;
        }

        // Baaki strings
        for(int i = 1; i < words.size(); i++) {

            unordered_map<char, int> temp;

            // Current string ki frequency
            for(char c : words[i]) {
                temp[c]++;
            }

            // Common characters ki minimum frequency
            for(auto it : freq) {
                char c = it.first;

                if(temp.find(c) != temp.end()) {
                    freq[c] = min(freq[c], temp[c]);
                }
                else {
                    freq[c] = 0;
                }
            }
        }

        vector<string> ans;

        // Result
        for(auto it : freq) {
            char c = it.first;
            int count = it.second;

            while(count--) {
                ans.push_back(string(1, c));
            }
        }

        return ans;
    }
};