class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,zerostrak=0;
        for(int num:nums){
            if(num==0){
                zerostrak++;
                count+=zerostrak;
            }else{
                zerostrak=0;
            }
        }return count;
    }
};