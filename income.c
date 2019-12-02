#include<stdio.h>
#include <conio.h>
void cal(void);
void main()
{
	int i,n;
	printf("\nENTER THE NUMBER OF THE INCOME: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		cal();
	getch();
}
void cal()
{
	int basic;
	float tax;
	printf("\nENTER THE AMOUNT OF SALARY: ");
	scanf("%d",&income);
	if(income<9000)
		tax=income*20/100;
	else
		tax=income*25/100;
	printf("\nTHE AMOUNT OF TAX IS %0.2f\n",tax);
}
