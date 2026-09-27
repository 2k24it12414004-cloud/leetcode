class Solution {
public:
//practice
//maine dekha dono ma sum add ho raha hai delta aur subtract bhi
//matlab sum unchanged hai old sum ke equal hai
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sourcesum=0;
        long long targetsum=0;
        if(source.size()!=target.size())
        return false;
        //we have to only equate the sum of target and souce
        int n=source.size();
        for(int i=0;i<n;i++){
            sourcesum=sourcesum+source[i];
        }
        for(int j=0;j<n;j++){
            targetsum=targetsum+target[j];
        }
        if(targetsum==sourcesum)
        return true;
        return false;
    }
};