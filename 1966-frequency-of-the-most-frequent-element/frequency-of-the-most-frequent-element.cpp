class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
    long long left = 0, right = 0;
    long long total = 0, maxFreq = 0;

    for (right = 0; right < nums.size(); right++) {
        total += nums[right];
        
        // total should be <= nums[right] * window_size
        while ((nums[right] * (right - left + 1)) - total > k) {
            total -= nums[left];
            left++;
        }

        maxFreq = std::max(maxFreq, right - left + 1);
    }

    return maxFreq;
        
    }
};