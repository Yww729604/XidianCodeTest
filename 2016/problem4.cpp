#include <bits/stdc++.h>

using namespace std;

int digitSum(int n)
{
	int ret;
	while(n)
	{
		ret += n%10;
		n /= 10;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int m;
	std::vector<int> v;

	while(cin>>m && m != 0)
		v.push_back(digitSum(m));

	sort(v.begin(),v.end());

	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;

	return 0;
}