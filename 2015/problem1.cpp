#include <bits/stdc++.h>

using namespace std;

int input[1001];

int main(int argc, char const *argv[])
{
	while(1)
	{
		int m;
		cin>>m;
		if (m==0)
			break;
		else if(m==1)
		{
			cout<<"yes"<<endl;
			continue;
		}
		for (int i = 0; i < m; ++i)
			cin>>input[i];
		for (int i = 0; i < m; ++i)
		{
			int flag = 1;
			for (int j = 0; j < m-i-1; ++j)
			{
				if(input[j]<input[j+1])
				{
					flag = 0;
					int temp = input[j];
					input[j] = input[j+1];
					input[j+1] = temp;
				}

			}
			if (flag)
				break;
		}
		
		int flag = 1;
		int conDiff = input[1] - input[0];
		for (int i = 2; i < m; ++i)
		{
			if (conDiff != input[i]-input[i-1])
			{
				cout<<"no"<<endl;
				flag = 0;
				break;
			}
		}
		if (flag)
			cout<<"yes"<<endl;
	}
	return 0;
}
// 6
// 23 15 4 18 35 11
// 3
// 3 1 2
// 0