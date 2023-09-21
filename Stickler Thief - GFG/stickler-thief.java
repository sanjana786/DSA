//{ Driver Code Starts
import java.util.*;
import java.io.*;

class GFG
 {
	public static void main (String[] args)
	 {
	  
	  //taking input using Scanner class
	  Scanner sc = new Scanner(System.in);
	  
	  //taking count of testcases
	  int t = sc.nextInt();
	  while(t-- > 0){
	      
	      //taking count of houses
	      int n = sc.nextInt();
	      int arr[] = new int[n];
	      
	      //inserting money present in 
	      //each house in the array
	      for(int i = 0; i<n; ++i)
	           arr[i] = sc.nextInt();
  	      
  	      //calling method FindMaxSum() of class solve
  	      System.out.println(new Solution().FindMaxSum(arr, n));
	 }
   }
}
// } Driver Code Ends


class Solution
{
    //Function to find the maximum money the thief can get.
    public int FindMaxSum(int arr[], int n)
    {
        
        if(n==0)
        
        return 0;
        if(n ==1)
        return  arr[1];
        if(n==2)
        return  Math.max(arr[0],arr[1]);
        int b[] = new int[n];
        b[0]  = arr[0];
        b[1] = Math.max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            b[i] = Math.max(b[i-2]+arr[i] , b[i-1]);
        }
        return b[n-1];
    
        
        
        
        
        // Your code here
    
        
        
        // Your code here
    }
}