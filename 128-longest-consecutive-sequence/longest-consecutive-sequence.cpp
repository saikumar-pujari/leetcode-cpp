class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> s(nums.begin(), nums.end());  
    int best = 0;

    for (int num : s) {  
        if (!s.count(num - 1)) {  
            int j = num;
            while (s.count(j)) { 
                j++;
            }
            best = max(best, j - num);
        }
    }

    return best;
    }
};