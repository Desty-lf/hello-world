#include<stdio.h>

int huiwen(int num)
{
	int i,j=10000,t,m=0,n=num;
	for(i=0;i<5;i++)
	{
		t=n%10;
		m=m+t*j;
		n=n/10;
		j=j/10;
	}
	if(m==num)
		return 1;
	else
		return 0;
}



int main()
{
	int n;
	printf("Please input a ÎåÎ»Êı£º");
	scanf("%d",&n);
	if(huiwen(n)==1)
		printf("Yes!\n");
	else
		printf("No!\n");
	return 0;
} 
