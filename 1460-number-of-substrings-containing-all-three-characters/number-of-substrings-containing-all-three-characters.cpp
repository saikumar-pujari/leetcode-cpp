class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,ans=0;
        unordered_map<char,int>sub;
        for(int r=0;r<s.size();r++){
            sub[s[r]]++;
            while(sub['a']>0 &&sub['b']>0 &&sub['c']>0){
                ans+=(s.size()-r);
                sub[s[l]]--;
                l++;
            }
        }return ans;
    }
};