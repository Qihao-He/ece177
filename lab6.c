/*This is ece177 lab6.*/
#include <stdio.h>
//square function is to print out a sqaure.
void square(){
int size,i,j,k;
printf("You have chosen square.\nPlease enter the size.\nPlease enter 0 for no fill, 1 for fill.\n");
scanf("%d%d",&size,&i);
//This is fill.
	if(i==1){
		for(k=0;k<size;k++){
			for(j=0;j<size;j++){
			printf("*");
			}
		printf("\n");
		}
	}
//This is no fill.
	if(i==0){
		for(k=0;k<size;k++){
			for(j=0;j<size;j++){
				if(j==0||k==0||j==size-1||k==size-1){
				printf("*");
				}
				else{
				printf(" ");
				}
			}
		printf("\n");
		}
	}
}
//triangle function is to print out a triangle.
void triangle(){
}
void zigzag(){
}
main(){
int choice;
printf("This is lab 6 print shapes.\nPlease enter\n1 for square.\n2 for triangle.\n3 for zigzag.\n0 for exit.\n");
scanf("%d",&choice);
	while(choice!=0){
		switch(choice){
		case 1:
		square();
		break;
		case 2:
		triangle();
		break;
		case 3:
		zigzag();
		break;
		default:
		printf("Your choice did not match any of the three, please enter again.\n");
		}
	printf("Please enter\n1 for square.\n2 for triangle.\n3 for zigzag.\n0 for exit.\n");
	scanf("%d",&choice);
	}
return 0;
}
