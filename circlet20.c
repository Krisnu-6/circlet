#include<stdio.h>

main()
{
	int i,j,k;
	int a=4,b=4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==a||j==b)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		a--;
		b++;
	}
}