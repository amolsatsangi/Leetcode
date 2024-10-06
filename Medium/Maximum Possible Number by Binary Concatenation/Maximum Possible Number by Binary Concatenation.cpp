class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        int anser{0};
        vector<string> binaries;
        for(int i =0;i<nums.size();i++){  
            string binary;
            while(nums[i])
            {
                binary += to_string(nums[i]%2);
                nums[i]/=2;
            }
            reverse(binary.begin(), binary.end());
            binaries.push_back(binary);
        }
        
        string str = (binaries[0]+binaries[1]+binaries[2]);
        anser = max(anser, stoi(str, nullptr,2));
        str = (binaries[0]+binaries[2]+binaries[1]);
        anser = max(anser, stoi(str, nullptr,2));
        str = (binaries[1]+binaries[0]+binaries[2]);
        anser = max(anser, stoi(str, nullptr,2));
        str = (binaries[1]+binaries[2]+binaries[0]);
        anser = max(anser, stoi(str, nullptr,2));
        str = (binaries[2]+binaries[0]+binaries[1]);
        anser = max(anser, stoi(str, nullptr,2));
        str = (binaries[2]+binaries[1]+binaries[0]);
        anser = max(anser, stoi(str, nullptr,2));
        return anser;
    }
};
