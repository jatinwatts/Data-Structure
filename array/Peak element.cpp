// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=j;
            arr[0]=arr[i];
            arr[i]=j;
        }
    }
    return 0;
   // Your code here
}
