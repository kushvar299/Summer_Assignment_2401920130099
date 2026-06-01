class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expectedNums;
        for (int i=1;i<nums.size();i++){
            if (nums[i-1]!=nums[i]){
                expectedNums.push_back(nums[i-1]);
            }
        }
        expectedNums.push_back(nums[nums.size()-1]);
        nums=expectedNums;
        return nums.size();
    }
};
