class Solution {
public:
//rg
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
int n=nums.size();
         vector<int>pre(n);
         pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
         pre[i]=pre[i-1]+nums[i];
        }
        int q=queries.size();
        int p=pre.size();
        vector<int>ans;
        //vevctor store length of subsequene
        for(int i=0;i<q;i++){
            int len=0;
            for(int j=0;j<p;j++){
                if(queries[i]>=pre[j]){
                    len++;
                }
//ans.push_back(len);
            }
        ans.push_back(len);
        }
        return ans;

    }
};