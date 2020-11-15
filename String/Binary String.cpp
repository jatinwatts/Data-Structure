using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string s;
         int n,l=0;
         cin>>n>>s;
         for(int i=0;i<s.length();i++){
         if(s[i]=='1'){
         l++;}
         }
         cout<<(l*(l-1))/2<<endl;
     }
	//code
	return 0;
}
