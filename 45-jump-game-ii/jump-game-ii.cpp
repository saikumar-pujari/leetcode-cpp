class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)return 0;
        int farest=0;
        int current=0;
        int jump=0;
        for(int i=0;i<n-1;i++){
            farest=max(farest,i+nums[i]);
            if(i==current){
                jump++;
                current=farest;
                if(current>=n-1){
                    break;
                }
            }
        }
        return jump;
    }
};