class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        //step1 build adjacendancy list
        vector<vector<int>>adj(n);
        queue<int>q;
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        //step 2 bfs traversal
        int n1=adj.size();
        vector<bool>visited(n1,false);
        
        q.push(source);
        visited[source]=true;
        while(q.size()>0){
            int temp=q.front();
            q.pop();
            if(temp==destination)
            return true;
            for(int neighbor:adj[temp])
            if(visited[neighbor]!=true)
            {
                q.push(neighbor);
                visited[neighbor]=true;
            }
        }
        return false;
    }
};