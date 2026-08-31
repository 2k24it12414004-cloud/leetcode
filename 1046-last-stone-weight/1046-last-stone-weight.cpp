class Solution {
public:
//garg heap
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x==y){
                continue;
               //if(pq.size())
            }
            else{
                pq.push(abs(x-y));
            }
        }
        if(pq.size()==1)
        return pq.top();
        else if(pq.size()==0)
        return 0;
        return -1;
    }
};