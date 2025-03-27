class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,maxlen=0;
        unordered_map<int,int>map;
        for(int i=0;i<fruits.size();i++){
            map[fruits[i]]++;
            if(map.size()>2){
                map[fruits[l]]--;
                if(map[fruits[l]]==0){
                    map.erase(fruits[l]);
                }l++;
            }
            maxlen=max(maxlen,i-l+1);
        }
        return maxlen;
    }
};