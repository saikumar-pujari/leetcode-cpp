class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>frq;
        int n=nums.size();
        vector<int>ans;
        for(int val:nums){
            frq[val]++;
        }
        for(auto&[key,value]:frq){
            if(value>n/3){
                ans.push_back(key);
            }
        }
        return ans;
    }
};