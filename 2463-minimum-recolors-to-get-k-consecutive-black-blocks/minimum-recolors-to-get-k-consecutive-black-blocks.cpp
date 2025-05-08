class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int whitecount=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                whitecount++;
            }
        }
        int minrecolour=whitecount;
        if(minrecolour==0)return 0;
        for(int i=k;i<blocks.size();i++){
            whitecount+=(blocks[i]=='W')-(blocks[i-k]=='W');
            if(minrecolour==0)return 0;
            minrecolour=min(minrecolour,whitecount);
        }
        return minrecolour;
    }
};