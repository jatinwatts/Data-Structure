#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


int modified (string a){
    int count=0;
    for(int i=1;i<a.length()-1;i++){
        if(a[i]==a[i+1] && a[i]==a[i-1]){
            count++;
            a.insert(i+1,"1");
        }
    }
    return count;
    // Your code here
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cout<<modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
