//Get the Ith bit
#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n,int i){
	return (n&(1<<i))!=0?1:0;
}
int main()
{
	int n,i;
	cin>>n>>i;
	cout<<getIthBit(n,i)<<endl;
	
	return 0;
	
}
