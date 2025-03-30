class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>ans;
        for(int val:nums2){
            if(s.count(val)){
                ans.push_back(val);
                s.erase(val);
            }
        }return ans;
    }
};