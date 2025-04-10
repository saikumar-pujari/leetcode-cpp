class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num!='.'){
                    string rowkey="row"+to_string(i)+num;
                    string colkey="col"+to_string(j)+num;
                    string boxkey="col"+to_string(i/3)+to_string(j/3)+num;
                    if(seen.count(rowkey)||seen.count(colkey)||seen.count(boxkey)){
                        return false;
                    }
                    seen.insert(rowkey);
                    seen.insert(colkey);
                    seen.insert(boxkey);
                }
            }
        }
        return true;    
    }
};