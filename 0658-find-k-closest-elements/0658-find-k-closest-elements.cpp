class Solution {
public:
//max heap same concept garg
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      //  map<pair<int,int>>mp;
        priority_queue<pair<int,int>>pq;
        //max heap
        //pair to store distance and element
        for(int i=0;i<arr.size();i++){
            int dist=abs(x-arr[i]);
            pq.push({dist,arr[i]});
            if(pq.size()>k)
            pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};