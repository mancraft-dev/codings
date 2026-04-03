#include <stdio.h>
int main(){
	int marks;
	printf("enter a marks:");
	scanf("%d",&marks);
	if(marks<=100 && marks>=90){
		printf ("A");
	}
	else if (marks<=90 && marks>=80){
		printf ("B");
	}
	else if (marks<=80 && marks>=60){
		printf ("C");
	}
	else if (marks<=60 && marks>=40){
		printf ("D");
	}
	else {
		printf ("FAIL");
	}
	return 0;
}        