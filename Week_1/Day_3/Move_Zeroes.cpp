class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int size= nums.size();
        vector<int> temp;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                temp.insert(temp.begin()+k, nums[i]);
                k++;
            }
            else{
                temp.push_back(nums[i]);
            }
        }
        nums=temp;
    }
};
