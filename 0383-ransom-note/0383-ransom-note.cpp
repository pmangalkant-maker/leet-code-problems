class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;

        for(int i = 0; i < ransomNote.size(); i++) {
            freq[ransomNote[i]]++;
        }

        for(int i = 0; i < magazine.size(); i++) {
            if(freq[magazine[i]] > 0) {
                freq[magazine[i]]--;
            }
        }

        for(auto it = freq.begin(); it != freq.end(); it++) {
            if(it->second > 0) {
                return false;
            }
        }

        return true;
    }
};