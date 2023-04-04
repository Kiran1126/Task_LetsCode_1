#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int addition();
int substraction();
int multiplication();
int division();
int average();
int percentage();
int squareroot();
int power();
void exit();
int main()
{
	int x,ch;
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplicaton");
	printf("\n4. Division");
	printf("\n5. Average");
	printf("\n6. Percenetage");
	printf("\n7. Square root");
	printf("\n8. Power");
	printf("\n9. Exit");
	printf("\nEnter your choice (1-9):");
	x : scanf("%d",&ch);
	system("cls");
	switch(ch)
	{
		case 1:
		{
			addition();
			break;
		}
		case 2:
		{
			substraction();
			break;
		}
		case 3:
		{
			multiplication();
			break;
		}
		case 4:
		{
			division();
			break;
		}
		case 5:
		{
			average();
			break;
		}
		case 6:
		{
			percentage();
			break;
		}
		case 7:
		{
			squareroot();	
			break;
		}
		case 8:
		{
			power();
			break;
		}
		case 9:
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
			printf("\n6. Percenetage");
			printf("\n7. Square root");
			printf("\n8. Power");
			printf("\n9. Exit");
			printf("\nEnter your choice (1-9) :");
			goto x;
			break;
	}
	system("pause");
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplicaton");
	printf("\n4. Division");
	printf("\n5. Average");
	printf("\n6. Percenetage");
	printf("\n7. Square root");
	printf("\n8. Power");
	printf("\n9. Exit");
	printf("\nEnter your choice (1-9) :");
	goto x;
	return 0;
}
int addition() //Code for addition operation
{
	int n,i;
	float num,sum=0;
	printf("How many numbers do you want to calculate :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num);
		sum=sum+num;
	}	
	printf("Result :%f\n",sum);
	return 0;
}
int substraction() //Code for substraction operation 
{
	float a,b,sub=0;
	printf("Enter the numbers :");
	scanf("%f\n%f",&a,&b);
	if(a>b)
	{
		sub=a-b;
	}
	else
	{
		sub=b-a;
	}
	printf("Result :%f\n",sub);
	return 0;
}
int multiplication() //Code for multiplication operation
{
	int i,n;
	float m,num=0;
	printf("How many numbers do you want to calculate :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num);
		m=m*num;
	}	
	printf("Result :%f\n",m);
	return 0;
}
int division() //Code for division operation
{
	float a,b,div=0;
	printf("Enter the numbers :");
	scanf("%f\n%f",&a,&b);
	div=a/b;
	printf("Result :%f\n",div);
	return 0;
}
int average() //Code for average operation
{
	int n,i;
	float num,sum=0,avg=0;
	printf("How many numbers do you want to calculate :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num);
		sum=sum+num;
	}	
	avg=sum/n;
	printf("Result :%f\n",avg);
	return 0;
}
int percentage() //Code for percentage operation
{
	float a,b,c;
	printf("Enter the number :");
	scanf("%f",&a);
	printf("Enter the number out of which you want to calculate the percentage :");
	scanf("%f",&b);
	c=(a/b)*100;
	printf("Result :%f\n",c);
	return 0;
}
int squareroot() //Code for Square root operation
{
	float n,sr=0;
	printf("Enter the number :");
	scanf("%f",&n);
	sr=sqrt(n);
	printf("Result :%f\n",sr);
	return 0;
}
int power() //Code for power operation
{
	float n,p,r;
	printf("Enter the number :");
	scanf("%f",&n);
	printf("Enter the power :");
	scanf("%f",&p);
	r=pow(n,p);
	printf("Result :%f\n",r);
	return 0;	
}
