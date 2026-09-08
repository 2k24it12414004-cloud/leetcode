class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
    int a=nums[i];
    int d=0;
    while(a!=0){
        int b=a%10;
        d=d+1;
        a=a/10;
    }
    if(d%2==0)
    count++;
        }
        return count;
    }
};