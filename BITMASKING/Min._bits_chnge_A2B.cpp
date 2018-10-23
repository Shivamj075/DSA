//Minimumno. of bits required to change a to b
#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
	int cnt=0;
	while(n>0){
		cnt++;
		n=n&(n-1);
	}
	
	return cnt;
}
int main()
{
	int a=11,b=15;
	int xr;
	xr=a^b;
	cout<<countSetBits(xr)<<endl;
	return 0;
}
