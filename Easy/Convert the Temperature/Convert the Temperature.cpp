class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temperature{celsius+273.15, celsius * 1.80 + 32.00};
        return temperature;
    }
};
