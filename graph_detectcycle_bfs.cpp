class Solution {

  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        int n=edges.size();
        int vis[n];
        queue<pair<int,int>> q;
        q.push({0,-1});
        vis[0]=1;
        
        while(!q.empty()){
            int node = q.front().first();
            int parentnode = q.front().second();
            q.pop();
            for(auto it: edges[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(vis[it]==1 && parentnode != it){
                    return true;
                }
            }
            
        }
        return false;
    }
};