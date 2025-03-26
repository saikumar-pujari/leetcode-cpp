class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, maxlen = 0;
    int n = cardPoints.size();

   
    for (int i = 0; i < k; i++) 
        lsum += cardPoints[i];

    maxlen = lsum;  

    
    for (int i = k - 1; i >= 0; i--) {
        lsum = lsum - cardPoints[i] + cardPoints[n - 1];
        n--; 
        maxlen = max(maxlen, lsum);
    }

    return maxlen;
    }
};