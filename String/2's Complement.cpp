using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         for(int i=0;i<s.length();i++){
             if(s[i]=='0'){
                 s[i]='1';
             }else
                s[i]='0';
         }
         for(int i=s.length()-1;i>=0;i--){
             if(s[i]=='0'){
                 s[i]='1';
                 break;
             }else
              s[i]='0';
            }
            cout<<s<<endl;
     }
	//code
	return 0;
}
