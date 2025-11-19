// week02-1.cpp
// C
#include <iostream>
int main(){
	int a,b;
	scanf("%d",&a);
	b=a;
	int ans = 0;
	while(a>0){
		ans = ans*10 + a%10;
		a = a/10;
	}
	printf("%d+%d=%d\n",b,ans,b+ans);
}
