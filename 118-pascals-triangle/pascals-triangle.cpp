class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            long long val=1;
            vector<int>ansRow;
            ansRow.push_back(1);
            for(int col=1;col<=i;col++){
                val = (val * (i - col + 1)) / col; 
                ansRow.push_back(val);
            }//return ansRow;
            ans.push_back(ansRow);

        }
        return ans;
    }
};