
//bank management system
#include<stdio.h>
#include<stdlib.h>
void account();
void deposite();
void withdraw();
void check();
struct bank{
	char name[50];
	int acc_number;
	float balance;
	
	
}b;
int main()
{
	int i, choice=0;
	b.balance=0.0;
	while(choice!=5)
	{
		printf("1:create account\n");
		printf("2:deposite amount\n");
		printf("3:withdraw amount\n");
		printf("4:check amount\n");
		printf("5:exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				account();
				break;
				
				case 2:
					deposite();
					break;
					
					case 3:
						withdraw();
						break;
						
						case 4:
							check();
							break;
							
							case 5:
								exit(0);
								break;
								
								default:
									printf("enter valid choice\n");
								
		}
	}
	
}
void account(){
	 int acc_number;
	
	printf("enter your name\n");
	scanf("%s",b.name);
	printf("enter account number\n");
	scanf("%d",&b.acc_number);
	printf("sucessfully ! created your account\n");
}
void deposite(){
	int accountnumber;
	float amount;
	printf("enter the account number\n");
	scanf("%d",&accountnumber);
	printf("enter the deposite amount\n");
	scanf("%f",&amount);
	if(b.acc_number==accountnumber)
	{
		b.balance+=amount;
		printf("deposite balance is %f\n",amount);
	}
	else
	{
		printf("Given account number is not found\n");
	}
	
}
void withdraw(){
	int account;
	float amount;
	printf("enter account number\n");
	scanf("%d",&account);
	printf("enter the withdraw amount\n");
	scanf("%f",&amount);
	if(b.acc_number==account)
	{
		if(b.balance>amount)
		{
			b.balance-=amount;
			printf("the withdraw amount is %f\n",amount);
		}
		else
		{
				printf("insufficient balace =%f\n",b.balance);
		}
	}
	else
	{
		printf("wrong account number\n");
	}
	
}
void check(){
	int account;
	printf("enter account number\n");
	scanf("%d",&account);
	if(b.acc_number==account)
	{
		printf("the current balance is %f\n",b.balance);
	}
	
	
}
