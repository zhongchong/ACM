#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

using namespace std;

vector<int> segTree;
vector<int> array;
int T,N;

void build(int node,int left,int right)
{
	if(left == right)
		segTree.at(node) = array.at(left);
	else
	{
		build(node*2,left,(left+right)/2);
		build(node*2+1,(left+right)/2+1,right);
		segTree.at(node) = segTree.at(node*2) + segTree.at(node*2+1);
	}
}

int query(int node,int left,int right,int i,int j)
{
	if(j < left || i > right)
		return -1;
	if(i <= left && j >= right)
		return segTree.at(node);
	int p1,p2;
	p1 = query(node*2,left,(left+right)/2,i,j);
	p2 = query(node*2+1,(left+right)/2+1,right,i,j);
	if(-1 == p1)
		return p2;
	if(-1 == p2)
		return p1;
	return p1+p2;
}

void update(int node,int left,int right,int pos,int val)
{
	if(left == right)
		segTree.at(node) += val;
	else
	{
		int mid = (left+right)/2;
		if(pos <= mid)
			update(node*2,left,mid,pos,val);
		else
			update(node*2+1,mid+1,right,pos,val);
		segTree.at(node) = segTree.at(node*2) + segTree.at(node*2+1);
	}
}

void disp(vector<int> &vec)
{
	for(int i=0;i<(int)vec.size();++i)
	{
		cout<<vec.at(i)<<" ";
	}
	cout<<endl;
}

int main()
{
	freopen("in.txt","r",stdin);
/////////////////////////////////////////////////////////////////////
	cin>>T;
	for(int i=0;i<T;++i)
	{
		cin>>N;
		segTree.resize(N*4,0);
		array.resize(N);
		cout<<"Case "<<i+1<<":"<<endl;
		for(int j=0;j<N;++j)
		{
			scanf("%d",&array.at(j));
		}
		build(1,0,N-1);
		char ch[20]={0};
		while(cin>>ch,strcmp(ch,"End")!=0)
		{
			int pa,pb;
			scanf("%d%d",&pa,&pb);
			if( strcmp(ch,"Add")==0 )
				update(1,0,N-1,pa-1,pb);
			else if(strcmp(ch,"Sub") == 0)
				update(1,0,N-1,pa-1,-pb);
			else
				cout<<query(1,0,N-1,pa-1,pb-1)<<endl;
		}
	}

/////////////////////////////////////////////////////////////////////
	fclose(stdin);
	return 0;
}