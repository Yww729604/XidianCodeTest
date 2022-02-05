#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int m;
	cin>>m;
	int array[30];
	for (int i = 0; i < 30; ++i)
		array[i] = 0;
	int num;
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < m; ++j){
			cin>>num;
			array[i]+=num;
			printf("array[%d] = %d\n",i,array[i] );
			array[j+m]+=num;
			printf("array[%d] = %d\n",j+m,array[j+m] );
			if (i == j)
				array[2*m]+=num;
		}
	}

	for (int i = 0; i < 2*m+1; ++i)
	{
		int flag = 1;
		for (int j = 0; j < 2*m-i; ++j)
		{
			if(array[j]<array[j+1])
			{
				flag = 0;
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}

		}
		if (flag)
			break;
	}

	for (int i = 0; i < 2*m+1; ++i)
		cout<<array[i]<<"\t";
	cout<<endl;
	return 0;
}

// 4
// 15 8 -2 6
// 31 24 18 71
// -3 -9 27 13
// 17 21 38 69