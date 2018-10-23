//In unordered map ther order does not maintain but its complxexity in avg case isO(1) and in map its O(log n)  its uses self balanced tree
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>m; //for unordered_map
	
	//Insert
	m["Mango"]=100;
	//Second Insert
	m.insert(make_pair("Apple",120));
	
	//Search
	if(m.count("Apple")==1){
		cout<<"Price of Apple is "<<m["Apple"]<<endl;
	}
	
	m["Guava"]==m["mango"] + 90;
	if(m.count("Guava")==0){
		cout<<"Guava doesn,t exist";
	}
	else{
		cout<<"Guava costs "<<m["Guava"]<<endl;
	}
	//for deletion erase function
	m.erase("Mango");
	
	//Iterators to Search
	auto f = m.find("Mango");
	if(f!=m.end()){
		cout<<"Price of Mango is"<<(f->second)<<endl;
	}
	else{
		cout<<"Mango doesn't exist";
	}
	return 0;
}
