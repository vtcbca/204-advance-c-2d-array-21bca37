//two 3*3 matrix//
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,sum[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n Enter value of m1[%d][%d]:",i,j);
		scanf("%d",&m1[i][j]);
		}
	}
	printf("___________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value of m2[%d][%d]:",i,j);
			scanf("%d",m2[i][j]);
		}
	}
	printf("______________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d \t",m1[i][j]);
		printf("\n");
	}
	printf("______________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d \t",m2[i][j]);
		printf("\n");
	}
	printf("==========================\n");
	printf("sum of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
