#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T = 0;
	cin>>T;
	int A = T-3500;
	if (A <= 0) 
		cout<<T<<endl;
	else if (A <= 1455)
		cout<<T + A*3/97<<endl;
	else if (A <= 1455 + 2700)
		cout<<T + 45 + (A-1455)/9<<endl;
	else if (A <= 1455 + 2700 + 3600)
		cout<<T + 45 + 300 + (A - 1455 - 2700)/4<<endl;
	else if (A <= 1455 + 2700 + 3600 + 19500)
		cout<<T + 45 + 300 + 900 + (A - 1455 - 2700 - 3600)/3<<endl;
	else if (A <= 1455 + 2700 + 3600 + 19500 + 14000)
		cout<<T + 45 + 300 + 900 + 6500 + (A - 1455 - 2700 - 3600 - 19500)*3/7<<endl;
	else if (A <= 1455 + 2700 + 3600 + 19500 + 14000 + 16250)
		cout<<T + 45 + 300 + 3600 + 6500 + 6000 + (A - 1455 - 2700 - 3600 - 19500 -14000)*35/65<<endl;
	else
		cout<<T + 45 + 300 + 3600 + 6500 + 6000 + 8750 + (A - 1455 - 2700 - 3600 - 19500 - 14000 - 16250)*45/55<<endl;
	return 0;
}