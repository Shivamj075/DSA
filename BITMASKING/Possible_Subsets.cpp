#include<bits/stdc++.h>
using namespace std;
//Generate all subsets using bimasking
void filterchar(char *a,int no)
{//no=5 then a_c (101)
	int i=0;
	while(no>0){
		(no&1)?cout<<a[i]:cout<<"";
		i++;
		no=no>>1;
		
	}
	cout<<endl;
}
void possibleSubsets(char *a,int n){
	int range=(1<<n)-1;
	for(int i=0;i<=range;i++){
		filterchar(a,i);
		
	}
}
int main()
{
	int n;
	char a[100];
	cin>>a;
	n=strlen(a);
	possibleSubsets(a,n);
	
	return 0;
	
}
