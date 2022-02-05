#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	while(N--)
	{
		string result = "";
		string tempInput;
		cin>>tempInput;
		for(auto i : tempInput)
		{
			if (isdigit(i))
				result+=i;
		}
		int len = result.size();
		unsigned long num = 0;
		for(int i = 0 ; i < result.size(); i++)
		{
			num*=10;
			num += result[i] - '0';
		}
		if (num == 0) cout<<0<<endl;
		for(int i = num - 1; i > 1;--i)
		{
			if(num/i*i== num) {
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}