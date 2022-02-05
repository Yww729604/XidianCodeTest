#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string x;
	cin>>x;
	
	int mode;
	cin>>mode;

	int lines;
	cin>>lines;

	if (mode == 0)
		for (string::iterator i = x.begin(); i != x.end(); ++i)
			*i = tolower(*i);

	while(lines--)
	{
		string s;
		string copy;
		cin>>s;
		copy = s;
		// cout<<"input s:"<<s<<endl;
		if (mode == 0)
			for (string::iterator i = s.begin(); i != s.end(); ++i)
				*i = tolower(*i);
		if (s.find(x) != -1)
			cout<<copy<<endl;
	}

	return 0;
}
// Hello
// 0
// 5
// HelloWorld
// HiHiHelloHiHi
// GrepIsAGreatTool
// HELLO
// HELLOisNOTHello

