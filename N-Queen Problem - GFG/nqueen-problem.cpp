//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++



class Solution{
public:
    vector<vector<int>> res;
    int pos[10];
    bool validPos(int r, int c){
        for(int i = 0; i<c; i++){
            if(pos[i]==r || abs(pos[i]-r) == abs(i-c)) return false;
        }
        return true;
    }
    void bt(int c, int n){
        if(c==n){
            vector<int> v;
            for(int i = 0; i<n ;i++){
                v.push_back(pos[i]+1);
            }
            res.push_back(v);
        }
        else{
            for(int i = 0; i<n; i++){
                if(validPos(i,c)){
                    pos[c] = i;
                    bt(c+1,n);
                }
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        res.clear();
        if(n==2 || n==3) return res;
        bt(0,n);
        return res;
        
        
        
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends