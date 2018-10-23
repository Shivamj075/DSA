#include<bits/stdc++.h>
using namespace std;
int main()
{
	//priority_queue<int>pq;//MAX Heap
	priority_queue<int,vector<int>,greater <int> >pq;  //Min Heap
	
	int a[10]={5,6,17,18,9,11};
	for(int i=0;i<6;i++)
	{
		pq.push(a[i]);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<endl;
		pq.pop();
	}
	
	return 0;
}
