#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int h,t,g;
	h = n/100;
	t = (n%100)/10;
	g = n % 10;
	if (h*h*h + t*t*t + g*g*g == n)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}