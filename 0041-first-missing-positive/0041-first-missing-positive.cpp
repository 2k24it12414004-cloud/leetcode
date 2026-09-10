class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
sort(nums.begin(),nums.end());
auto last = unique(nums.begin(), nums.end());

    // Step 3: Erase the "duplicate tail"
nums.erase(last, nums.end());
int c=1;
int n=nums.size();
for(int i=0;i<n;i++)
{
    if(nums[i]>0){
       if( nums[i]==c)
       c++;
       else
       return c;
    }
}
return c;
    }
};