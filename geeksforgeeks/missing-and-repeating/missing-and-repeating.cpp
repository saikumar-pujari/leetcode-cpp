class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans(n+1,false);
        int miss=-1,rep=-1;
        for(int val:arr){
            ans[val]++;
        }
        for(int i=0;i<=n;i++){
            if(ans[i]==0){
                miss=i;
            }else if(ans[i]==2){
                rep=i;
            }
        }
        return {rep,miss};
    }
};
