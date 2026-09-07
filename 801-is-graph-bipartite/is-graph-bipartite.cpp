class Solution {
public:
    bool res=true;
    void dfs(vector<vector<int>>& graph,int node,int c, vector<int>&colour){
        colour[node]=c;
        for(int j=0;j<graph[node].size();j++){
            int neigh=graph[node][j];
            if(colour[neigh]!=-1 && colour[neigh]==c){
                res=false;
                return;
            }
            if(colour[neigh]==-1){
                dfs(graph,neigh,1-c,colour);
            }
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                dfs(graph,i,0,colour);
            }
        }
        return res;
    }
};