//week01-4a.cpp
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,sum=0;
	for(i=n;i<=m;i++)
	{
		if(i%3==0)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
}
