//count number of set bits in number
#include<bits/stdc++.h>
using namespace std;
int count(int n){
// It takes O(no. of bits) so its not that much efficient
	int cnt=0;
	while(n>0){
		cnt+=(n&1);
		n=n>>1;
	}
	return cnt;
}
int countEffi(int n){
//It takes O(no. of sets bits) its efficient n&(n-1) remove last set bit
	int cnt=0;
	while(n){
		cnt++;
		n=n&(n-1);
	}
	
	return cnt;
}
int main()
{
	int n;
	cin>>n;
	cout<<count(n)<<endl;
	cout<<countEffi(n)<<endl;
	
}
