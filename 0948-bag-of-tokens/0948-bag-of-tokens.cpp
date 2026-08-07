class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int right  = tokens.size() - 1;
        int left = 0;
        int score = 0;
         int maxScore = 0;

        while(left <= right) {
            if(tokens[left] <= power) {
                power-= tokens[left];
                score++;
                left++;
                maxScore = max(maxScore, score);
            } else if(score > 0)  {
                power += tokens[right];
                 score--;
                  right--;

            } else {
                break;
            }
        } 
        return maxScore;

        
    }
};