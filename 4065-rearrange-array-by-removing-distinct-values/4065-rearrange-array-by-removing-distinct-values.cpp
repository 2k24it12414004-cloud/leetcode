class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //map a frequency map
        map<int,int>mp;
        //element, frequency
        for(int it:nums){
            mp[it]++;
        }
        //find the maximum frequency
        int maxfreq=INT_MIN;
        for(auto it:mp){
            int freq=it.second;
            maxfreq=max(maxfreq,freq);
        }
        vector<int>ans;
        for(int round=0;round<maxfreq;round++){
            for(auto it:mp){
                int freq=it.second;
                int ele=it.first;
                if(freq>round)
                ans.push_back(ele);
            }
        }
        return ans;
    }
};