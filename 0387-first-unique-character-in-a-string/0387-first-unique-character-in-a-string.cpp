// class Solution {
// public:
//     int firstUniqChar(string s) {
        // unordered_map<char,int> m;
        // queue<int> Q;

        // for(int i = 0; i<s.size(); i++) {
        //     if(m.find(s[i]) == m.end()) {
        //         Q.push(i);
        //     }
        //     m[s[i]]++;

        //     while(Q.size()>0 && m[s[Q.front() ]] > 1) {
        //         Q.pop();
        //     }
        // }
        // return Q.empty() ? - 1: Q.front();
        class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Step 1: Frequency count
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        // Step 2: First character with frequency 1
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};