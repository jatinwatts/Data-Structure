#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    char c;
	    cin>>n;
	   queue<char> q;
	   int arr[26] = {0};
	   for(int i=0;i<n;i++){
	       cin>>c;
	       arr[c-97]++;
	       q.push(c);
	       
	           while(!q.empty() && arr[q.front()-97]!=1){
	               q.pop();
	           }
	           if(!q.empty()){
	               cout<<q.front()<<" ";
	           }
	           else{
	               cout<<"-1"<<" ";
	           }
	   }
	   cout<<endl;
	   
	}
	return 0;
}
