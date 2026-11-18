class Solution {
public:
//me need to check both sides temp to pattern
//and pattern to temp
    bool wordPattern(string pattern, string s) {
      //  pair<char,string>pq;
        int n=s.size();
        vector<string>temp;
        string ch="";
        for(int i=0;i<n;i++){
        
        if(s[i]==' '){
         temp.push_back(ch);
         ch="";
         }
         else ch=ch+s[i];
        }
        temp.push_back(ch);
        map<char,string>mp1;
        //pattern and temp
        if(pattern.size()!=temp.size())
        return false;
  for(int i=0;i<pattern.size();i++){
    char chi=pattern[i];
if(mp1.find(chi)!=mp1.end()){
string ele=mp1[chi];
if(temp[i]==ele){
    continue;
}
else
return false;
}
else{
    mp1.insert({chi,temp[i]});
}
     }


//part 2 dhrundar
map<string,char>mp2;
//temp and pattern
for(int i=0;i<pattern.size();i++){
    string chi=temp[i];
    if(mp2.find(temp[i])!=mp2.end()){
      char ele=mp2[chi];
      if(pattern[i]==ele)
      continue;
      else
      return false;
    }
    else
    mp2.insert({chi,pattern[i]});
}

        return true;
    }
};