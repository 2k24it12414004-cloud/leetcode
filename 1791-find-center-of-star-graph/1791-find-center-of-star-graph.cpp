class Solution {
public:
//amitas by me thinking
    int findCenter(vector<vector<int>>& edges) {
    //    vector<int>a;
    //    for(int i=0;i<edges.size();i++){
    //     a.push_back(edges[0])
    //    }
    //    vector<int>b=edges[1];
    //   // if(a[0]==b[0]||a[0]==b[1]) 
    //   // return a[0];
    // //    else
    //     return  a[1];
    if(edges[0][0]==edges[1][0]||edges[0][0]==edges[1][1])
    return edges[0][0];
    if(edges[0][1]==edges[1][0]||edges[0][1]==edges[1][1])
    return edges[0][1];
    return -1;

    }
};