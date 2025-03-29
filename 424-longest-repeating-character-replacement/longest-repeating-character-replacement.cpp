class Solution {
public:
    int characterReplacement(string s, int k) {
         int left = 0, maxCount = 0, maxLength = 0;
    unordered_map<char, int> freqMap;  

    for (int right = 0; right < s.size(); right++) {
        freqMap[s[right]]++;  // Increase frequency of current character
        maxCount = max(maxCount, freqMap[s[right]]);  // Track most frequent char

        // If window size minus max frequency character > k, shrink window
        while ((right - left + 1) - maxCount > k) {
            freqMap[s[left]]--;  
            left++;  
        }

        maxLength = max(maxLength, right - left + 1);  // Update max length
    }

    return maxLength;
    }
};