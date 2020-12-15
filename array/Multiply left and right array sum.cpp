 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         j=0;
         k=0;
         cin>>n;
         int *arr=new int [n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n/2;i++)
         {
             j=arr[i]+j;
         }
         for(i=n/2;i<n;i++)
         {
             k=arr[i]+k;
         }
         cout<<k*j<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
