class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int> s;
    for (int num : nums) {
        s.insert(num);
        if (s.size() > 3) s.erase(s.begin()); // Keep only top 3
    }
    return (s.size() == 3) ? *s.begin() : *s.rbegin();
    }
};