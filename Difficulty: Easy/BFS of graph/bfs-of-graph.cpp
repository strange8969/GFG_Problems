class Solution {
  public:
  void BFS(vector<vector<int>> &adj, int u, vector<bool> &visited, vector<int> &result){
      queue <int> que;
      que.push(u);
      visited[u]=true;
      result.push_back(u);
      
      while(!que.empty()){
          int u = que.front();
          que.pop();
          for(int &v:adj[u]){
              if(!visited[v]){
                  que.push(v);
                  visited[v]=true;
                  result.push_back(v);
              }
          }
      }
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int v = adj.size();
        vector<bool> visited(v,false);
        vector<int> result;
        BFS(adj,0,visited,result);
        return result;
    }
};