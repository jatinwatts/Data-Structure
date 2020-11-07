

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

int countSet(int x,int count)
	{
	    if(x%2==1)
	    {
	        count=count+1;
	    }
	    if(x/2!=0)
	    {
	        countSet(x/2,count);
	    }else{
	        return count;
	    }
	}

class Solution
{
public:
	int is_bleak(int n)
	{
	    for(int i=1;i<=n;i++)
	    {
	        if(i+countSet(i,0)==n)
	        {
	            return 0;
	        }
	    }
	    return 1;
	    // Code here.
	}
	
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends
