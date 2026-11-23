class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<string> temp;
        int n = s.size();
        string ch = "";
        for (int i = 0; i < n; i++) {
            
            if (s[i] == ' ') {
                temp.push_back(ch);
                ch="";
            }
if(s[i]!=' ')
            ch = ch + s[i];
        }
        //last missing value needs to push in temp
        temp.push_back(ch);
        vector<int>integer;
        for(int i=0;i<temp.size();i++){
            // if(isdigit(temp[i])){
            //     integer.push_back(temp[i]);
            // }
            if(all_of(temp[i].begin(), temp[i].end(), ::isdigit)){
    // string contains only digits
    integer.push_back(stoi(temp[i]));
    //needs to typecast

}
        }
for(int i=1;i<integer.size();i++){
    if(integer[i]<=integer[i-1])
    return false;
}
return true;
    }
};