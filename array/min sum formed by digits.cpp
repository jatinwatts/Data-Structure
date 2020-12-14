 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         int x=0,z=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if(arr[i]>arr[j])
                 {
                     k=arr[i];
                     arr[i]=arr[j];
                     arr[j]=k;
                 }
             }
         }
         for(i=0;i<n;i++)
         {
            x=x*10+arr[i];
             i++;
         }
         for(i=1;i<n;i++)
         {
             z=z*10+arr[i];
             i++;
         }
         cout<<z+x<<endl;
     }
	//code
	return 0;
}
