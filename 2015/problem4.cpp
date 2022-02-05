#include <bits/stdc++.h>

using namespace std;

vector<bool> table;

int getDigitSum(int m)
{
	int ret = 0;
	while(m)
	{
		ret += m%10;
		m /= 10;
	}
	return ret;
}

int getSonDigitSum(int n)
{
	int ret = 0;
	bool flag = true;
	while(flag)
	{
		flag = false;
		for (int i = 2; i < n; ++i)
		{
			if (table[i] && n%i == 0)
			{
				ret += getDigitSum(i);
				n /= i;
				flag = true;
				break;
			}
		}
	}
	return ret+getDigitSum(n);
}

int main(int argc, char const *argv[])
{
	
	table.push_back(false);
	table.push_back(false);
	table.push_back(true);
	for (int i = 3; i < 100001; ++i)
	{
		bool flag = true;
		for (int j = 2; j < i; ++j)
		{
			if (i%j==0)
			{
				flag = false;
				break;
			}
		}
		table.push_back(flag);
	}
	int n;
	while(	cin>>n && n!=0)
	{	
		int digitSum = getDigitSum(n);
		int sonDigitSum = getSonDigitSum(n);
		// cout<<"digitSum:"<<digitSum<<"\tsonDigitSum:"<<sonDigitSum<<endl;
		if (sonDigitSum == digitSum)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}