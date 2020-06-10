#include<iostream>
using namespace std;

int change(int amount,int* coins,int size)
{
	if(size==0)
	{
		if(amount==0)
		{
			return 1;
		}
		return 0;
	}
	int res[size][amount+1];
	for(int i = 0;i<size;i++)
	{
		res[i][0] = 1;
	}
	int x = 0,y=0;
	for(int i = 0;i<size;i++)
	{
		for(int j = 1;j<amount+1;j++)
		{
			if(i>=1)
			{
				x = res[i-1][j];
			}
			else
			{
				x = 0;
			}
			if(j - coins[i] >= 0)
			{
				y = res[i][j-coins[i]];
			}
			else
			{
				y = 0;
			}
			res[i][j] = x + y;
		}
	}
	return res[size-1][amount];
}

int main()
{
	int coins[] = {1,2,5};
	int size = sizeof(coins)/sizeof(coins[0]);
	int amount = 5;
	cout<<change(amount,coins,size)<<endl;
}
