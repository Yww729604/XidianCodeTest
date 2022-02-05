#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	std::vector<int> v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	
	int mid = v.at(n/2);
	int min = 0,max = 0;
	for(auto i:v)
	{
		if (i>mid)
			++max;
		else if (i<mid)
			++min;
	}
	if (min == max)
		cout<<mid<<endl;
	else
		cout<<-1<<endl;
	return 0;
}