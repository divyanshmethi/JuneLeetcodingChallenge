#include<iostream>
#include<math.h>
using namespace std;

bool isPowerTwoV1(int n)
{
	if(n==0)
	{
		return false;
	}
	return ceil(log2(n)) == floor(log2(n));
}

bool isPowerTwoV2(int n)
{
	if(n<=0)
	{
		return false;
	}
	int countSetBits = 0;
	while(n)
	{
		countSetBits++;
		n = n&(n-1);
	}
	return countSetBits==1;
}

int main()
{
	int n = 5;
	cout<<isPowerTwoV1(n)<<endl;
	cout<<isPowerTwoV2(n)<<endl;
	n = 8;
	cout<<isPowerTwoV1(n)<<endl;
	cout<<isPowerTwoV2(n)<<endl;
}
