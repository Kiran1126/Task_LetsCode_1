#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int addition();
int substraction();
int multiplication();
int division();
int average();
void exit();
int main()
{
	int x,ch;
	float a,b;
	printf("Enter the first number :");
	scanf("%f",&a);
	printf("Enter the second number :");
	scanf("%f",&b);
	printf("\nYour options are :");
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplicaton");
	printf("\n4. Division");
	printf("\n5. Average");
	printf("\n6. Exit");
	printf("\nEnter your choice (1-6):");
	x : scanf("%d",&ch);
	system("cls");
	switch(ch)
	{
		case 1:
		{
			printf("Result :%f",a+b);
			break;
		}
		case 2:
		{
			printf("Result :%f",a-b);
			break;
		}
		case 3:
		{
			printf("Result :%f",a*b);
			break;
		}
		case 4:
		{
			printf("Result :%f",a/b);
			break;
		}
		case 5:
		{
			printf("Result :%f",(a+b)/2);
			break;
		}
		case 6:
		{
			exit(0);
			break;
		}
		default :
			printf("You've entered a wrong choice.\n\nYour choices are :\n");
			printf("\n1. Addition");
			printf("\n2. Substraction");
			printf("\n3. Multiplicaton");
			printf("\n4. Division");
			printf("\n5. Average");
			printf("\n6. Exit");
			printf("\nEnter your choice (1-6) :");
			goto x;
			break;
	}
	return 0;
}

