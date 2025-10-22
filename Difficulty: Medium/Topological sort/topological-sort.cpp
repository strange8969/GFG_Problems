class Solution {
  public:
  void DFS(vector<vector<int>>& adj, int u, vector<bool> &visited, stack <int> &st){
      visited[u] = true;
      for(int &v:adj[u]){
          if(!visited[v]){
              DFS(adj,v,visited,st);
          }
      }
      st.push(u);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
        }
        
        vector<bool> visited(V,false);
        stack <int> st;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                DFS(adj,i,visited,st);
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};