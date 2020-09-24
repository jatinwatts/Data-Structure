void SortedStack :: sort()
{
    int *arr = new int [s.size()];
    int n= s.size();
    for(int i=0;i<n;i++)
    {
        arr[i]=s.top();
        s.pop();
    }
    for (int i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
       int min_idx = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(arr[min_idx], arr[i]);  
    }
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
    }
    delete[]arr;
   //Your code here
}
