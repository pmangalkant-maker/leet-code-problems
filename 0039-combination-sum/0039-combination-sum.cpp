class Solution {
public:

    void solve(int i,
               vector<int>& candidates,
               int target,
               vector<int>& temp,
               vector<vector<int>>& ans)
    {
        // Target mil gaya
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }

        // Out of bounds ya target negative
        if(i == candidates.size() || target < 0)
            return;

        // Include current element
        temp.push_back(candidates[i]);
        solve(i, candidates, target - candidates[i], temp, ans);
        temp.pop_back();

        // Exclude current element
        solve(i + 1, candidates, target, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, candidates, target, temp, ans);

        return ans;
    }
};