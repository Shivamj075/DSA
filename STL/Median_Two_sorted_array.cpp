#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int>v;
  int n,*a,*b,ans;
  
  cin>>n;
  a=new int[n];
  b=new int[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  cin>>b[i];
  for(int i=0;i<n;i++){
  	v.push_back(a[i]);
  	v.push_back(b[i]);
  }
  ans=v.size()/2;
  ans=(v[ans-1]+v[ans])/2;
  
  //for(int i=0;i<v.size();i++)
  //cout<<v[i]<<" ";
  cout<<ans<<endl;
  
	return 0;
}
