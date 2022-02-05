#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string out = "";
	char c = '\0';
	int times = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (isalpha(s[i]))
		{
			if (times == 0)
				out += c;
			else
				out += string(times,c);
			times = 0;
			c = s[i];
		}
		if (isdigit(s[i]))
			times = times*10 + s[i] - '0';
	}
	if (times == 0)
		out += c;
	else
		out += string(times,c);
	cout<<out<<endl;
	return 0;
}