#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         map<int,vector<int>> mp;
         int n,k,x;
         cin>>n;
         int *arr = new int[n];
         for(int i=0;i<n;i++){
             cin>>x;
             mp[x].push_back(i);
         }
         cin>>k;
         int z=1;
         //map<int, vector<int>>::iterator it;
         for(auto it = mp.rbegin(); it != mp.rend(); ++it){
             //vector<int>::iterator i;
             for(auto i=(it->second).begin();i != (it->second).end();++i){
                 cout<<*i<<" ";
             }
             if(z==k){
                 break;
             }
             z++;
         }
         cout<<endl;
     }
	//code
	return 0;
}
