#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<string>s1;//stack<int>s2
	s1.push("Apple");
	s1.push("Guava");
	s1.push("Banana");
	
	while(!s1.empty())
	{
		cout<<s1.top()<<endl;
		s1.pop();
	}
	return 0;
}
