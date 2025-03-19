class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int c1 = 0, c2 = 0, ele1 = -1, ele2 = -1;
    int n = nums.size();

    // Step 1: Find two potential majority candidates
    for (int num : nums) {
        if (num == ele1) {
            c1++;
        } else if (num == ele2) {
            c2++;
        } else if (c1 == 0) {
            ele1 = num;
            c1 = 1;
        } else if (c2 == 0) {
            ele2 = num;
            c2 = 1;
        } else {
            c1--;
            c2--;
        }
    }

    // Step 2: Verify candidates
    int count1 = 0, count2 = 0;
    
    for (int val : nums) {
        if (val == ele1) count1++;
        else if (val == ele2) count2++;
    }

    vector<int> ans;
    if (count1 > n / 3) ans.push_back(ele1);
    if (count2 > n / 3) ans.push_back(ele2);

    return ans;
    }
};