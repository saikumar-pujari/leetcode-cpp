class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int rem=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[rem]){
                rem++;
                nums[rem]=nums[i];
            }
        }
        return rem+1;
    }
};