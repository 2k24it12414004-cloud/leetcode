class Solution {
public:
//by me 
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
            //p store frequency
          int  p=pq.top().first;
          for(int i=0;i<p;i++){//fill each element jab tak uska frequency ho tab tak
            s[id]=pq.top().second;
            //store character value
            id++;//always icrease index saves from memory limit exceeded
          }

            pq.pop();
        }
        return s;
    }
};