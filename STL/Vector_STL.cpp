#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	vector<int>v1;
	//v1.reserve(100);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v1.push_back(temp);
	}
	v1.pop_back();
	cout<<v1.capacity()<<endl;
	
	sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<endl;
}
