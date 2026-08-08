class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;


       double F = (celsius * 9/5) + 32;
       double K = celsius + 273.15;

       ans.push_back(K);
       ans.push_back(F);

       return ans;

    }
};