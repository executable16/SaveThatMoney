#include<bits/stdc++.h>
using namespace std;
 vector<int> go(vector<int>& nums) {

 	int n = nums.size();
 	int candidate1=-1,candidate2=-1;
 	int count1=0,count2=0;
 	for(auto x : nums)
 	{
 		if(x==candidate1)
 			count1++;
 		else if(x==candidate2)
 			count2++;
 		else if(count1==0)
 		{
 			candidate1=x;
 			count1=1;
 		}
 		else if(count2==0)
 		{
 			candidate2=x;
 			count2=1;
 		}
 		else
 		{
 			count1--;
 			count2--;
 		}
 	}
 	count1=0,count2=0;
 	for(auto x : nums)
 		{
 			if(x==candidate1)
 			count1++;
 			if(x==candidate2)
 			count2++;
 		}
  	vector<int> ans;
 	if(count1>n/3)
 		ans.push_back(candidate1);
 	if(count2>n/3)
 		ans.push_back(candidate2);
 	
 	return ans;

}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	auto y = go(v);
	for(auto x : y)
		cout<<x<<" ";
}
