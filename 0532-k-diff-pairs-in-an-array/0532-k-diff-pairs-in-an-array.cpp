class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       set<pair<int,int>>s;
//for(int i=0;i<nums.size();i++){
  //  s.insert(nums[i]);
 //} 
 int n=nums.size();
 vector<int>ans;
// for(auto it:s){
//     ans.push_back(it);
// }
sort(nums.begin(),nums.end());
int count=0;
for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
if(abs(nums[i]-nums[j])==k)
s.insert({nums[i],nums[j]});
    }
}
//return ans.size();
return s.size();
    }
};