/*wa menudriven program to perform following task using udf and it's differt categery
1.addition
2.subtraction
3.divison
4.modulus
5.exit */
#include<stdio.h>
#include<conio.h>
void addition();
void subtraction(int,int);
int divison();
int modulus(int,int);
int menu();
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	c=menu();
	switch(c)
	{
		case 1:addition();
		       break;
		case 2:
			printf("\n Enter 2 value:");
			scanf("%d %d",&x,&y);
			subtraction(x,y);
			break;
		case 3:
			 division();
			 printf("\n division is %d:",div);
			 break;
		case 4:
			printf("\n Enter 2 value:");
			scanf("%d %d",&x,&y);
			div=modulus(x,y);
			printf("modulus of %d&%d is %d",x,y,div);
			break;
		case 5: exit(0);
		default:
			printf("invalid choise");
			break;
	}
	printf("\n\n\t do you want to continue?(yes=y/Y,no=n/N):");
	flushall();
	scanf("%c",&yn);
	}
	while(yn='Y'||yn='y');
	getch();
}
int menu();
	int choice;
	printf("\n menu");
	printf("\n____________\n 1.addition \n 2.subtraction \n 3.division \n 4.modulus \n 5.exit \n______________\n");
	printf("\n\t Enter your choise:");
	scanf("%d",&choice):
	return(choice);
	void addition()
	{
		int x,y;
		scanf("%d %d",&x,&y);
		printf("\n addition of %d & %d is %d",x,y,x+y);
	}
	void subtraction(int a,int b)
	{
		printf("subtraction of %d & %d is %d",x,y,x*y);
	}
	int division()
	{
		int x,y;
		scanf("%d %d",&x,&y);
		return(x/y);
	}
	int modulus(int x,int y);
	{
		return(x%y);
	}