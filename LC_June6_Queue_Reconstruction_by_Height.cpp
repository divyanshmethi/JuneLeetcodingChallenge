#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reconstructQueue(int people[][2],int size)
{
	sort(people, people + size, [](const int a[], const int b[]) {
            if (a[0] != b[0]) return a[0] > b[0];
            return a[1] < b[1];
        });
        vector<vector<int>> res;
        vector<int> temp(2);
        for (int i = 0;i<size;i++){
        	temp[0] = people[i][0];
        	temp[1] = people[i][1];
            res.insert(res.begin() + people[i][1], temp);
        }
        return res;
}

void printVector(vector<vector<int>> res)
{
	for(int i = 0;i<res.size();i++)
	{
		cout<<res[i][0]<<", "<<res[i][1]<<endl; 
	}
}

int main()
{
	int arr[][2] = {{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};
	int size = sizeof(arr)/sizeof(arr[0]);
	reconstructQueue(arr,size);
	//printVector(result);
}
