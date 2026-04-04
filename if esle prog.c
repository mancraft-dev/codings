#include <stdio.h>
int main(){
	char ans;
	printf ("Q:-what language is c:");
	scanf ("%c",&ans);
	if(ans=='p' || ans=='s' || ans=='c'){
		printf("ans is carrect");
	}
	else{
		printf ("ans is not carrect");
	}
	return 0;
}