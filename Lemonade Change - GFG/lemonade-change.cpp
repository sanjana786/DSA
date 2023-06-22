//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
       bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int a=0,b=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
                a++;
            }
            else if(bills[i]==10){
                if(a==0)return false;
                a--;
                b++;
            }
            else{
                if(b!=0 and a!=0){
                    b--;
                    a--;
                }
                else if(a>=3)a-=3;
                else return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends