class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        typedef pair<int,char>pi;
        //frequency character
        priority_queue<pi>pq;
        // character frequency
        for(auto it:mp){
          pq.push({it.second,it.first});
          
        }
      //  string c="";
      int id=0;
        while(pq.size()>0){
          int  p=pq.top().first;
          for(int i=0;i<p;i++){
            s[id]=pq.top().second;
            id++;
          }

            pq.pop();
        }
        return s;
    }
};