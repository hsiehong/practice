class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int idx=0;
        for(int j=1;j<nums.size();j++){
            if(nums[idx]!=nums[j])
                nums[++idx]=nums[j];
        }
        return (idx+1);
    }
};
