class NumArray {
public:
    int * array;
    NumArray(vector<int>& nums) {
        array = new int[nums.size()];
        array[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            array[i]=nums[i]+array[i-1];
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return array[right];
       return array[right]-array[left-1];
    }
};
