class Solution {
public:
//naive by me thinking
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>temp;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
           temp.push_back(matrix[i][j]);
        }
    } 
    sort(temp.begin(),temp.end());
    if(k>temp.size()){
        return -1;
    }
    return temp[k-1];    
    }
};