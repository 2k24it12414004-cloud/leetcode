class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        //element freq1
        map<char,int>mp2;
        //freq1 s ki
        for(auto ch1:s){
            mp1[ch1]++;
        }
        for(auto ch2:t){
            mp2[ch2]++;
        }
        if(mp1.size()!=mp2.size())
        return false;//agar size hi equl nahi then
        //find map1 element in map2 .fin()!=
        for(auto x:mp1){
            int freq1=x.second;
            char ch1=x.first;
            if(mp2.find(ch1)!=mp2.end()){
                //way to find frequency in mp2[ch] ch ka
                int freq2=mp2[ch1];
                if(freq1!=freq2)
                return false;


            }
            else
            return false;
        }
        return true;

    }
};