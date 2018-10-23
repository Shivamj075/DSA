//We have given a n number of points in 2d plane now we have to find nearest K point  to origin so we use functor and heap which efficien our program (N+K logN)
//If we use direct sorting our complexity is (NlogN) 

#include<bits/stdc++.h>
using namespace std;
class Car{
	public:
		int x;
		int y;
		int id;
		
		Car(int id,int c,int y)
		{
			this->id=id;
			this->x=x;
			this->y=y;
		}
		int dist(){
			return x*x + y*y;
		}
		void print(){
			cout<<"ID :"<<id;
			cout<<"Location :"<<x<<","<<y<<endl;
		}
};
//FUnctor - Functional Objects
class CarCompare{
	public:
		//Method to overload() operator
		bool operator()(Car a,Car b)
		{
			//cout<<"Comparing "<<a<<" and "<<b<<endl;
			return a.dist() < b.dist();
		}
};

int main()
{
	priority_queue<Car,vector<Car>,CarCompare> pq;
	int x[10]={5,6,7,18,9,11,0,3};
	int y[10]={1,-2,8,9,10,91,1,2};
	
	//Insert these in q
	for(int i=0;i<8;i++)
	{
		Car c(i,x[i],y[i]);
		pq.push(c);
	}
	//Heap - Max
	while(!pq.empty())
	{
		Car p = pq.top();
		p.print();
		pq.pop();
	}
	return 0;
}
