// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {


public:
 // Function to return a list containing the DFS traversal of the graph.

 void DFSUtil(int i, vector<int> adj[], int V, bool vis[],
              vector<int> &res)
 {
     // cout<<"DFS UTIL : "<< i<<" is Visited? "<<vis[i]<<endl;

     if (vis[i]) return;

     // marking vertex as visited and adding it to output list.
     vis[i] = true;
     res.push_back(i);

     // iterating over connected components of the vertex and if any
     // of them is not visited then calling the function recursively.
     for (int j : adj[i]) {
         // cout<<"Neighbours of "<<i<<" :"<<j<<" isVisisted>? "<<vis[j]<<endl;
         if (!vis[j]) DFSUtil(j, adj, V, vis, res);
     }
 }

 // Function to return a list containing the DFS traversal of the graph.
 vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     // using a boolean list to mark all the vertices as not visited.
     bool vis[V];
     memset(vis, false, sizeof(vis));

     vector<int> res;
     for (int i = 0; i < V; i++) {
         // if any vertex isn't visited then calling the function.
         if (!vis[i]) {
             DFSUtil(i, adj, V, vis, res);
         }
     }
     // returning the output list.
     return res;
 }
};

// { Driver Code Starts.
int main() {
 int tc;
 cin >> tc;
 while (tc--) {
     int V, E;
     cin >> V >> E;

     vector<int> adj[V];

     for (int i = 0; i < E; i++) {
         int u, v;
         cin >> u >> v;
         adj[u].push_back(v);
         adj[v].push_back(u);
     }
     // string s1;
     // cin>>s1;
     Solution obj;
     vector<int> ans = obj.dfsOfGraph(V, adj);
     for (int i = 0; i < ans.size(); i++) {
         cout << ans[i] << " ";
     }
     cout << endl;
 }
 return 0;
}  // } Driver Code Ends
