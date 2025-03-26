class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int hash[256];  
    memset(hash, -1, sizeof(hash));
    int l = 0, r = 0, maxlen = 0;
    int n = s.size();

    while (r < n) {
        if (hash[s[r]] >= l) { 
            l = hash[s[r]] + 1; 
        }

        hash[s[r]] = r;  
        maxlen = max(maxlen, r - l + 1);  
        r++;
    }

    return maxlen;
}

    
};