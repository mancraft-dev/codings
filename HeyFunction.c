#include <stdio.h>
void showOutput(){
	int a,b;
	printf("Enter Two Number : ");
	scanf("%d%d",&a,&b);
	printf(" %d + %d = %d : \n",a,b,(a+b));
	
}
int main(){
	
	showOutput();	
	showOutput();
	return 0;
}