#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string s1,s2;
         int arr1[26]={0},arr2[26]={0};
         cin>>s1>>s2;
         if(s1.length()!=s2.length())
         {
            cout<<"NO"<<endl;
         }
         else
         {
             for(int i=0;i<s1.length();i++)
             {
                 arr1[s1[i]-97]++;
                 arr2[s2[i]-97]++;
             }
             int i=0;
             while(i<26)
             {
                 if(arr1[i]!=arr2[i])
                 {
                     cout<<"NO"<<endl;
                     break;
                 }
                 i++;
             }
             if(i==26)
             cout<<"YES"<<endl;
         }
         
     }
	//code
	return 0;
}
