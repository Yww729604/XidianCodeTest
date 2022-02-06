#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[20];
	std::map<string, int> map;
	int h_start=0,m_start=0,h_end=0,m_end=0;
	char str[100];


	while(scanf("%s %d:%d %d:%d",s,&h_start,&m_start,&h_end,&m_end) != EOF)
	{
		cout<<s<<" "<<h_start<<" "<<h_end<<" "<<m_start<<" "<<m_end<<endl;
		int add_time = h_end*60 + m_end - h_start*60 - m_start;
		// cout<<add_time<<endl;
		if (!map.count(s))
			map.insert(make_pair(s,add_time));
		else
			map[s] = map[s] + add_time;
	}
	for(std::map<string , int>::iterator i = map.begin(); i != map.end() ; ++i)
		cout<<i->first<<" "<<i->second<<endl;
	return 0;
}
