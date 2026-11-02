class Solution {
public:
//me concept for group take first element then gcd of g and freq[i] put in g
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        //element and frequency
        for(auto it:deck){
           mp[it]++;
        }
        //gcd nikal frequency ka
        vector<int>freq;
        for(auto it:mp){
            freq.push_back(it.second);
        }
        int g=freq[0];
        for(int i=0;i<freq.size();i++){
           g=gcd(g,freq[i]);
        }
        if(g<2)
        return false;
        else
        return true;
    }
};