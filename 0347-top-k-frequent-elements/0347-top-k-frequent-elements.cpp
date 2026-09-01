class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //map frquency
        map<int,int>mp;
        typedef pair<int,int> pi;
        //used min heap because top k tha matlab ulta leta hai more so min heap 
        //if k type ka quesstion ho toh
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        //element,frequency
        for(auto ele:nums){
            mp[ele]++;
        }
        vector<int>ans;
        //heap arrange according to frequencies
        for(auto it:mp){
            pq.push({it.second,it.first});
            //freq element
            if(pq.size()>k)
            pq.pop();
        }
        //fill vecctor
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};