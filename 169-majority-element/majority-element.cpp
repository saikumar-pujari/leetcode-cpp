class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int fre=0,num=-1;
        for(int i=0;i<n;i++){
            if(fre==0){
                num=nums[i];
                fre=1;
            }else if(nums[i]==num){
                fre++;
            }else {fre--;}
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                count++;
            }
           
        }return (count > n / 2) ? num : -1;
    }
};