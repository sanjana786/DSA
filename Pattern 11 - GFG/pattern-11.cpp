//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int start=1;
        int i,j;
        for(i=0;i<n;i++){
            if(i%2==0)
            start=1;
            else
            start=0;
            for(j=0;j<=i;j++)
            {
                cout<<start<<" ";
                start=1-start;
            }
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