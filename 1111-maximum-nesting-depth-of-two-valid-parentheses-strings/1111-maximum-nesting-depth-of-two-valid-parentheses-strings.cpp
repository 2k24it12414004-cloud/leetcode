class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.size();
        int depth=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
         depth++;
         ans.push_back(depth%2);
         }
         
         else{
            
            ans.push_back(depth%2);
            depth--;
            
         }
       //  if()
        }
        return ans;
    }
};