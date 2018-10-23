#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
	//cout<<"Compare"<<a<<"and"<<b<<endl;
	return a>b;
}
int main()
{
	int a[]={5,4,3,1,2,6,7};
	int n=sizeof(a)/sizeof(int);
	//sort(a,a+n);//Ascending Order
	sort(a,a+n,compare);//Descending Order
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
