//Gussing game
#include<stdio.h>
int main(){
	int a,b;
	a=10;
	while(a!=b){
	
	printf("gusse the number\n");
	scanf("%d",&b);
	if(a==b)
	{
		printf("conguratulation! you guse the number\n");
	}
	else if(b>a)
	{
		printf("the given number is larger\n");
	}
	else
	{
		printf("the number is smaller\n");
	}
}
	return 0;
} 
