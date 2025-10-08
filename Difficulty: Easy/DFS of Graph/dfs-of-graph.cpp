class Solution {
  public:
  void DFS(vector<vector<int>>& adj,int u, vector<bool> &visited, vector<int> &result ){
      if(visited[u] == true){
          return;
      }
      visited[u]=true;
      result.push_back(u);
      for(int &v:adj[u]){
          if(!visited[v]){
              DFS(adj,v,visited,result);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        int v = adj.size();
        // Code here
        vector <int> result;
        vector <bool> visited(v,false);
        DFS(adj,0,visited,result);
        return result;
    }
};