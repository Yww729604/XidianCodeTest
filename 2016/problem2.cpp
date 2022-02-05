#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,t,k;
	cin>>n>>m>>t>>k;
	int matrix[20][20];
	int isNeribour[50];

	for (int i = 0; i < 50; ++i)
		isNeribour[i] = 0;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin>>matrix[i][j];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (matrix[i][j] == k)
			{
				if (i > 0)
					isNeribour[matrix[i-1][j]] = 1;
				if (j > 0)
					isNeribour[matrix[i][j-1]] = 1;
				if (i < n-1)
					isNeribour[matrix[i+1][j]] = 1;
				if (j < m-1)
					isNeribour[matrix[i][j+1]] = 1;
			}
		}
	}
	int numOfRegion = 0;
	for (int i = 0; i < t; ++i)
		numOfRegion += isNeribour[i];
	cout<<numOfRegion<<endl;
	return 0;
}