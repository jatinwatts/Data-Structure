// C++ program to demonstrate sorting in vector 
// of pair according to 2nd element of pair 
#include<bits/stdc++.h> 
using namespace std; 

// Driver function to sort the vector elements 
// by second element of pairs 
bool sortbysec(const pair<int,int> &a, 
			const pair<int,int> &b) 
{ 
	return (a.second < b.second); 
} 

int main() 
{ 
	// declaring vector of pairs 
	vector< pair <int, int> > vect; 

	// Initialising 1st and 2nd element of pairs 
	// with array values 
	int n,a,b;
    cin>>n;

	// Entering values in vector of pairs 
	for (int i=0; i<n; i++)
    {
        cin>>a>>b;
		vect.push_back( make_pair(a,b));
    }

	 
	sort(vect.begin(), vect.end(), sortbysec); 

	int j=0,count=1; 
	for (int i=1; i<n; i++) 
	{ 
		// "first" and "second" are used to access 
		// 1st and 2nd element of pair respectively 
		if(vect[i].first>=vect[j].second)
        {
            count++;
            j=i;
        }
        
	} 
    
    cout<<count;
	return 0; 
} 
