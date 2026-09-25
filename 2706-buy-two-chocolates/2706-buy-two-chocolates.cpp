class Solution {
public:
//bekar approach find min 1 ,min 2 then subtract money se
//if sum bade hoga ,money se so return money
    int buyChoco(vector<int>& prices, int money) {
        // sort(prices.begin(),prices.end());
        // int n=prices.size();
        // int min1=prices[0];
        // int min2=prices[1];
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=prices.size();
        for(int i=0;i<n;i++){
            pq.push(prices[i]);
        }
        int min1=pq.top();
        pq.pop();
        int min2=pq.top();
        pq.pop();
        if(min1+min2>money)
        return money;
        if(min1+min2==money)
        return 0;
        if(min1+min2<money)
        return -1*(min1+min2)+money;
        return -1;
    }
};