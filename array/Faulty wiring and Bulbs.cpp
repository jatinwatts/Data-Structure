 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,l=0;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(int i=0;i<n;i++)
         {
             if(arr[i]==0)
             {
                 l++;
                 for(int j=i;j<n;j++)
                 {
                     if(arr[j]==1)
                     {
                         arr[j]=0;
                     }else{
                         arr[j]=1;
                     }
                 }
             }
         }
         cout<<l<<endl;
         
     }
	//code
	return 0;
}
