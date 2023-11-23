//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
     
        
       
    public:
    
    bool hamiltonian(int i, vector<bool>& visited, vector<vector<int>>& adj, int cnt,int n){
        
        if(cnt==n-1){
            return true;
        }
        
        
        visited[i]=1;
        
        for(auto x: adj[i]){
            if(!visited[x]){
                if(hamiltonian(x,visited,adj,cnt+1,n)){
                    return true;
                }
                
            }
        }
        visited[i]=false;
        
        return false;
        
    }
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<vector<int>> adj(N+1);
        int i,j;
        for(i=0;i<M;i++){
            int u = Edges[i][0];
            int v = Edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(i=1;i<=N;i++){
            
            
            vector<bool> visited(N+1,0);
            
            if(hamiltonian(i,visited,adj,0,N)){
                return true;
            }
        }
        return false;
  
        
        
        // code here
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends