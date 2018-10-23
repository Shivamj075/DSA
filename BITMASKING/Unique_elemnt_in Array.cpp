// Find unique number in array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={5,2,6,9,2,5,6};
	int xr=a[0];
	for(int i=1;i<7;i++)
	{
		xr=xr^a[i];
		
	}
	cout<<xr<<endl;
	return 0;
}
