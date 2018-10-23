#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
	return s1.length()>s2.length();
}
int main()
{
	string s1("Hello World");
	cout<<s1<<endl;
	string s2="Another Way!";
	cout<<s2<<endl;
	
	cout<<s2.length()<<endl;
	for(int j=0;j<s2.length();j++)
		cout<<s2[j]<<"-";
	string s3;
	getline(cin,s3);
	cout<<s3<<endl;
	
	string arr[]={"Apple","Bannaaaaaa","Pineapple","Mango","Guava"};
	sort(arr,arr+5);//Its according to lexicographically order
	sort(arr,arr+5,compare);//According to lenght of string
	
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
