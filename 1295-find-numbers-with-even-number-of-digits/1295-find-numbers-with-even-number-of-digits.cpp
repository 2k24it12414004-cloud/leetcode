class Solution {
public:
//optimise ashwani approach fill all  element as string and then 
//check size event digit count ++
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            if(s.size()%2==0)
            count++;
        }
        return count;
    }
};