class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        if(arr.size()==1)
            return arr[0];
        int sum{0};
        vector<int> prefix(arr.size());
        prefix[0]= arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        for(int i=3;i<prefix.size();i=i+2){
            for(int j=i-1;j<prefix.size();j++){
                if(j-i>=0)
                    sum += prefix[j]-prefix[j-i];
                else{
                    sum += prefix[j];
                    cout<<prefix[j]<<endl;
                }

            }
            
        }
        if(prefix.size()%2)
            sum += 2*prefix[prefix.size()-1];
        else
            sum += prefix[prefix.size()-1];
        return sum;
    }
};
