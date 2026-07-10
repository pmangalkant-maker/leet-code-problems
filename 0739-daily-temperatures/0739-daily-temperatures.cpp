class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // answer array
        stack<int> st; // indices ka stack (decreasing temp)
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top(); st.pop(); // purana chota temp wala index
                result[idx] = i - idx; // kitne din baad warm mila
}
                    st.push(i); // current index push karo
}
            
            return result;

        

    }
};