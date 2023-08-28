//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int i,j;
        char c;
        for(i=1;i<=n;i++){
            for(j=0;j<n-i;j++)
            cout<<" ";
            
            int bp=(2*i-1)/2;
            c='A';
            for(j=0;j<2*i-1;j++){
            cout<<c;
            if(j<bp)
            c++;
            else
            c--;
            }
            for(j=0;j<n-i;j++)
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