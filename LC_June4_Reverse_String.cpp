#include<iostream>
using namespace std;

void reverseString(char* s,int size)
{
	int start = 0,end = size - 1;
	while(start < end)
	{
		swap(s[start],s[end]);
		start++;
		end--;
	}
}

int main()
{
	char s[] = {'h','e','l','l','o'};
	int size = 5;
	reverseString(s,size);
	string reversedString = "";
	for(int i = 0;i<size;i++)
	{
		reversedString+=s[i];
	}
	cout<<reversedString<<endl;
}
