#include <stdio.h>
int main(){
	int number;
	printf("enter a number :");
	scanf("%i",&number);
	if(number%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}