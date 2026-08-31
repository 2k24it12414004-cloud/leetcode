class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        typedef pair<int,vector<int>>piv;
        priority_queue<piv>pq;
        //for gives inner vector
        for(auto v:points){
            int x=v[0];//access kiya vector 1st element
            int y=v[1];
            int dist=x*x+y*y;
            pq.push({dist,v});
            //v vector hai pair bhi vector hi hai
            if(pq.size()>k)
            pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);//vector dala hai
            pq.pop();
        }
        return ans;
    }
};