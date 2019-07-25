#include<bits/stdc++.h>
using namespace std;
/*void bfs(struct node* temp)
{
	queue<node*> s;
	s.push(temp);
	while(!s.empty())
	{
		auto x = s.front();
		s.pop();
		cout<<x->val<<" ";
		if(x->left)
		{
			s.push(x->left);
		}
		if(x->right)
		{
			s.push(x->right);
		}
	}


}*/
struct node
{
	node *left,*right;
	int val;
	node(int x)
	{
		val=x;
		left=right=NULL;
	}
};
vector<int> v;
void preorder(node* temp)
{
	stack<node*> s;
	s.push(temp);
	while(!s.empty())
	{
		auto x = s.top();
		v.push_back(x->val);
		s.pop();
		if(x->right)
			s.push(x->right);
		if(x->left)
			s.push(x->left);
		
	}
	for(auto x : v)
		cout<<x<<" ";
	return;
}

int main()
{
	struct node* temp;
	temp = new node(20);
	temp->left=new node(10);
	temp->right=new node(22);
	temp->left->left=new node(7);
	temp->left->right=new node(15);
	temp->right->left=new node(21);
	temp->right->right=new node(24);
	preorder(temp);
	cout<<"\n";
	preorde(temp);
}
