#include <stdio.h>
int main(){
	int ch,a,b,c,d; 
	printf("choose your payment option:\n" "1)upi 2)cc/dc 3)cash on 4)net banking");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			printf("enter your upi number:");
			scanf("%d",&a);
			printf("upi confirm");
			break;
		}
		case 2:{
			 printf("enter cc/dc number:");
			 scanf("%d",&b);
			 printf("payment confirm  Ac number :");
			break;
		}
		case 3:{
			 printf("enter a price");
			 scanf("%d",&c);
			 printf("thanks for choose chash");
			break;
		}
		case 4:{
			 printf("enter bank number:");
			 scanf("%d",&d);
			 printf("bank confirm");
			break;
		}
		default :{
			printf("choose proper way ");
			break;
		}
	} 
}