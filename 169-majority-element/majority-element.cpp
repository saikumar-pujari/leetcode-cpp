class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val=0,num=-1;
        for(int i=0;i<nums.size();i++){
            if(val==0){
                num=nums[i];
                val=1;
            }else if(nums[i]==num){
                val++;
            }else{val--;
            }
        }
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==num) count++;
        }
        if(count>nums.size()/2) return num;
        else return -1;
    }
};