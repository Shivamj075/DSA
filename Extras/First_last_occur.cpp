#include<bits/stdc++.h>
using namespace std;
int first_occur(int arr[],int l,int r,int x,int n){
	//int l=0,r=n-1;
	if(r>=l)
	{
		int mid=int(l+r/2);
		if((mid==0 || x>arr[mid-1]) && arr[mid]==x)
			return mid;
		else if(x>arr[mid])
			return first_occur(arr,mid+1,r,x,n);
		else
			return first_occur(arr,l,mid-1,x,n);
		
	}
	return -1;
}
int last_occur(int arr[],int l,int r,int x,int n)
{
	if(r>=l)
	{
		int mid=int(l+r)/2;
		if((mid==n-1||x<arr[mid+1]) && arr[mid]==x)
			return mid;
		else if(x<arr[mid])
			return last_occur(arr,l,mid-1,x,n);
		else
			return last_occur(arr,mid+1,r,x,n);
	}
	return -1;
}
int main()
{
	int arr[]={5,7,7,8,8,10};
	int n=(sizeof(arr)/sizeof(int));
	int x=8,l=0,r=n-1;
	cout<<"First_Occur"<<first_occur(arr,l,r,x,n);
	cout<<"Last_Occur"<<last_occur(arr,l,r,x,n);
	return 0;
	
}
