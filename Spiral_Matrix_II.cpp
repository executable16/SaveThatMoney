#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> go(int A) 
{
   
	int count=1;
	vector< vector<int>> a(A, vector<int> (A));
	int T=0,B=a.size()-1,L=0,R=a[0].size()-1;
	int dir=0;
	
	
	while(T<=B && L<=R)
	{
		
		if(dir==0)
		{
			for(int i=L;i<=R;i++)
				a[T][i]=count,count++;
				
			T++;dir++;
			
		}
		else if(dir==1)
		{
			for(int i=T;i<=B;i++)
				a[i][R]=count,count++;
			R--;dir++;
			
		}
		else if(dir==2)
		{
			for(int i=R;i>=L;i--)
				a[B][i]=count,count++;
			B--;dir++;
			
		}
		else
		{
			for(int i=B;i>=T;i--)
				a[i][L]=count,count++;
			L++;dir++;
			
		}
		
		dir=dir%4;
		
	}
	return a;

}
int main()
{
	int n;
	cin>>n;
	
	vector<vector<int>>  x = go(sqrt(n));
	for(int i=0;i<sqrt(n);i++)
	{
		for(int j=0;j<sqrt(n);j++)
			cout<<x[i][j]<<" ";
		cout<<endl;
	}
}
