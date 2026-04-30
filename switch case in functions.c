#include <stdio.h>
int add(num1,num2){
	return num1 + num2;
}
int mult(num1, num2){
	return num1 * num2;
}
int sub(num1, num2){
	return num1 - num2;
}
int dev(num1, num2){
	return num1 / num2;
}
int main (){
	int num1,num2,result;
	char ch;
	printf("select operator:");
	scanf("%s",&ch);
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	switch(ch){
		case '+':{
			result= add(num1,num2);
			printf("your result:%d",result);
			break;
		}
		case '*':{
			result=mult(num1,num2);
			printf("this is your result:%d",result);
			break;
		}
		case '-' :{
			result=sub(num1,num2);
			printf("your result: %d",result);
			break;
		}
		case '/' :{
			result=dev(num1,num2);
			printf("your result:%d",result);
			break;
		}
		default :{
			printf("enter a valid operator.");
			break;
		}
	}
	return 0;
}