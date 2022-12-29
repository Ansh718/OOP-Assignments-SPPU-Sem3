#include <iostream>
#include <iterator>
#include<string>
#include <map>
#include<algorithm>
using namespace std;
int main()
{
	map<string, int> data;
	data["Maharashtra"] = 19820000;
	data["Kerala"] = 1820000;
	data["Karnataka"] = 6310000;
	data["Gujrat"] = 25820000;
	data["Goa"] = 820000;
	cout<<"Enter the state name you want to get population of"<<endl ;
	string state ;
	cin>>state;
	auto itr=data.find(state);
	if(itr == data.end())
	{
		cout<<"not found ";
	}
	else
	{
		cout<<itr->first<<" has population of "<<itr->second;
	}
	return 0 ;
}