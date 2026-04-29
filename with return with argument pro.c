#include <stdio.h>
void manoj(int f,int l){
	
	printf("%d * %d =%d \n",f,l,(f+l));
}
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d%d",&a,&b);
	manoj(a , b);
	return 0;
}