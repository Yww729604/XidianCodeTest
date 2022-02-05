#include <bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	vector<int> v;
	for(int i = 0 ; i < N ; i++)
	{
		int p;
		cin>>p;
		v.push_back(p);
	}
	stack<int> s;
	int maxNum = 0;
	for (int i = 0 ; i < N ; i++)
	{
		int tempNum = count(v.begin(), v.end(),v.at(i));
		if (tempNum>maxNum)
		{
			maxNum = tempNum;
			while(!s.empty())
				s.pop();
			s.push(v.at(i));
		}
		else if(tempNum == maxNum)
		{
			s.push(v.at(i));
		}
	}

	int outNum = s.top();
	while(!s.empty())
	{
		int tempNum = s.top();
		s.pop();
		if (tempNum < outNum)
			outNum = tempNum;
	}
	cout<<outNum<<endl;
	return 0;
}