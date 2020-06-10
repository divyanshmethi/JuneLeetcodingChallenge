#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int twoCitySchedCost(vector<vector<int>> v)
{
	multimap<int,vector<int>> m;
	int size = v.size();
	for(int i = 0;i<size;i++)
	{
		m.insert(make_pair(v[i][0] - v[i][1],v[i]));
	}
	multimap<int,vector<int>>::iterator it = m.begin();
	int res = 0;
	for(int i = 0;i < size/2;i++)
	{
		res += it->second[0];
		it++;
	}
	while(it!=m.end())
	{
		res += it->second[1];
		it++;
	}
	return res;
}

int main()
{
	int arr[][2] = {{10,20},{30,200},{400,50},{30,20}};
	int size = 4;
	vector<vector<int>> v;
	vector<int> v1(2);
	for(int i = 0;i<size;i++)
	{
		v1[0] = arr[i][0];
		v1[1] = arr[i][1];
		v.push_back(v1);
	}
	cout<<twoCitySchedCost(v)<<endl;
}
