#include <stdio.h>
int main(){
	int i,a;
	printf ("enter a number:");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		if (i%2==0){	
		printf("even %d\n",i);
		}
		
	}
	return 0;
}