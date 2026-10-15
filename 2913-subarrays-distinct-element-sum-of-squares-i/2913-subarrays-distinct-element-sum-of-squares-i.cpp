class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
         int count=0;
                         set<int>s;

        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                 s.insert(nums[k]);
                 //s.inse
                 
                }
                int d=s.size();
                 count=count+d*d;
                 s.clear();
                 //it delete all elements
       // to refreash
            }
        }
        return count;
    }
};