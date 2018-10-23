#include<bits/stdc++.h>
using namespace std;
int main()
{
	int (*ptr)[5];
	int a[5],*p,i;
	//int *p1[5];
	ptr=&a;
	p=a;
	cout<<ptr<<endl;
	cout<<p<<endl;
	cout<<++ptr<<endl;//20 bits diff
	cout<<++p<<endl;//4 bits diff
	
}
