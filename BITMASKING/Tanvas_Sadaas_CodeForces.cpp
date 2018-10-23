//Lucky numbr are those number whose include 4or7 find the index of given lucky number
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	char a[20];
	cin>>a;
	int len=strlen(a);
	ll ans=0;
	
	ans=(1<<len)-2;
	//Iterate over the nuber from units place, and add the contribution of 7
	
	for(int i=len-1,pos=0;i>=0;i--,pos++){
		if(a[i]=='7'){
			ans+=(1<<pos);
		}
	}
	
	cout<<ans+1<<endl;
	
	return 0;
}
