//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
          unordered_map<int, int> f;
        queue<char> q;
        
        for(auto i : S){
            ++f[i];
            
            if(f[i] == 1)
                q.push(i);
                
            while(q.size() and f[q.front()] > 1)
                q.pop();
        }
        
        return q.size() ? q.front() : '$';
       //Your code here
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends