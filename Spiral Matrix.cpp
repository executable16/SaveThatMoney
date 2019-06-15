#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int T=0,B=n-1,L=0,R=m-1;
	int dir=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	while(T<=B && L<=R)
	{
		if(dir==0)
		{
			for(int i=L;i<=R;i++)
				cout<<a[T][i]<<" ";
			T++;dir++;
		}
		else if(dir==1)
		{
			for(int i=T;i<=B;i++)
				cout<<a[i][R]<<" ";
			R--;dir++;
		}
		else if(dir==2)
		{
			for(int i=R;i>=L;i--)
				cout<<a[B][i]<<" ";
			B--;dir++;
		}
		else
		{
			for(int i=B;i>=T;i--)
				cout<<a[i][L]<<" ";
			L++;dir++;
		}
		dir=dir%4;
	}

	
}
