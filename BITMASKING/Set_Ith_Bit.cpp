//Change Ith bit set to 1

#include<bits/stdc++.h>
using namespace std;

int SetIthBit(int n,int i){
	n=n|(1<<i);
	
	return n;
}

int main(){
	int n,i;
	cin>>n>>i;
	cout<<SetIthBit(n,i)<<endl;
	
	return 0;
	
}
