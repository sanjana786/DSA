//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        int i,j,top,bottom,left,right;
        for(i=0;i<2*n-1;i++)
        {
            for(j=0;j<2*n-1;j++){
                top=i;
                left=j;
                bottom=(2*n-2)-i;
                right=(2*n-2)-j;
                cout<<(n-min(min(top,bottom),min(right,left)))<<" ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends