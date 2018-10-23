//Count Min number of steps to reach enemy whhich is n step away from hulk
#include<bits/stdc++.h>
using namespace std;
int CountSetBits(int no)
{
	int cnt=0;
	while(no>0){
		cnt++;
		no=no&(no-1);
	}
	return cnt;
}
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cout<<CountSetBits(n)<<endl;
	}
	
	return 0;
}
