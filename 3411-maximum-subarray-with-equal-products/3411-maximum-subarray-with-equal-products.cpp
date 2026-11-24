class Solution {
public:
long long prod(vector<int>&temp){
    long long product=1;
    for(int i=0;i<temp.size();i++){
       if(product>1e18/temp[i]) break;
      product=product*temp[i];
    }
    return product;
}

long long hcf(vector<int>&temp){
long long a=temp[0];
for(auto it:temp){
    a=gcd(a,(long long)it);
}
return a;
} 
long long lcm(vector<int>&temp){
    long long a=temp[0];
    for(auto it:temp){
        a=a/gcd(a,(long long)it)*it;
    }
    return a;
}
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=i;j<n;j++){
                temp.push_back(nums[j]);
                if(prod(temp)==lcm(temp)*hcf(temp)){
                    len=max(len,(int)temp.size());
                }
            }
        }
        return len;
    }
};