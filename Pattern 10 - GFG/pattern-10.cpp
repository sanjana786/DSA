//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        
         int i,j;
        for(i=1;i<=n;i++){
            for(j=0;j<i;j++)
            cout<<"* ";
            for(j=0;j<n-i;j++)
            cout<<" ";
            cout<<endl;
        }
        for(i=1;i<=n-1;i++){
            for(j=0;j<n-i;j++)
            cout<<"* ";
            for(j=0;j<i;j++)
            cout<<" ";
            cout<<endl;
        }
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends