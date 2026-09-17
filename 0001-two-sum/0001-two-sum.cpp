class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int search=target-nums[i];
            if(mp.find(search)!=mp.end())
        {
            int id2=mp[search];
            return {id2,i};
        }
            mp.insert({nums[i],i});

        }
        return {};
    }
};