#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,k;
	cin>>n>>k;

	vector<int> v(n);

	for(int i=0;i<n;i++)
		cin>>v[i];
	long long int prefixsum=0;
	for(int i=0;i<k;i++)
		prefixsum+=v[i];
	long long int maxsum = prefixsum;
	int j=0;
	for(int i=k;i<n;i++)
	{	
		prefixsum += (v[i] - v[i-k]); // include a window at i and also close window at i-k
		maxsum = max(maxsum,prefixsum);
	}
	cout<<maxsum;

}
