//week01-4b.cpp
#include <stdio.h>
using namespace std;
{
	int n,m;
    cin >> n >> m;
	int i,sum=0;
	for(i=n;i<=m;i++)
	{
		if(i%3==0)
		{
			sum+=i;
		}
	}
	cout << sum;;
}
