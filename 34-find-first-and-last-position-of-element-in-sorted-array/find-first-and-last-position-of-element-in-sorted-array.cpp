class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    auto lower = lower_bound(nums.begin(), nums.end(), target);
    auto upper = upper_bound(nums.begin(), nums.end(), target);

    if (lower == nums.end() || *lower != target)return {-1, -1};

    return {int(lower - nums.begin()), int(upper - nums.begin() - 1)};
    }
};