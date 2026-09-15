class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //element and frequency
        map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<int>freqarr;
        for(auto it:mp){
            int freq=it.second;
            freqarr.push_back(freq);

        }
        sort(freqarr.begin(),freqarr.end());
        for(int i=0;i<freqarr.size();i++){
            if(i>0&&freqarr[i]==freqarr[i-1])
            return false;
        }
        return true;
    }
};