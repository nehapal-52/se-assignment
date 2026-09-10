#include<stdio.h>
main()
{
	int a=10,b=3,rem,m=10;
	rem=a%b;
	printf("\n rem%d",rem);
	//m++;//increment by 1
	//printf("\n m=%d",m++);//post increment //assign valuee first then increment
	printf("\n m=%d",++m);// preincrement// first incremeny then assign value
}
