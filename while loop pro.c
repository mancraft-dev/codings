#include <stdio.h>
int main(){
	int i=1,a;
	printf("enter a number:");
	scanf("%d",&a);
	do{
		if (i%2==0)
		printf("even %d \n",i);
		i++;
	}while(i<=a);
}