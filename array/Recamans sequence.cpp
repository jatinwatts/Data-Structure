using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int i,k,a,j;
         cin>>k;
         int *arr = new int[k];
         arr[0]=0;
         arr[1]=1;
         a=1;
         cout<<0<<" ";
         for(i=2;i<k;i++)
         {
             if(i==2){
                 cout<<1<<" ";
             }
             
             if(a-i>0 )
             {
                 int l=0;
                for(j=0;j<i;j++){
                    if(arr[j]==a-i){
                         l++;
                    }
                }
                if(l==0){
                    cout<<a-i<<" ";
                    a=a-i;
                    arr[i]=a;
                }else{
                    cout<<a+i<<" ";
                    a=a+i;
                    arr[i]=a;
                }
             }
             else{
                 cout<<a+i<<" ";
                 a=a+i;
                 arr[i]=a;
             }
         }
         
         cout<<endl;
     }
	//code
	return 0;
}
