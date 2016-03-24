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
	int size,i,j,k;
	printf("You have chosen triangle.\nPlease enter the size.\nPlease enter 0 for no fill, 1 for fill.\n");
	scanf("%d%d",&size,&i);
//This is fill.
	if(i==1){
		for(k=0;k<size;k++){
			for(j=0;j<k+1;j++){
			printf("*");
			}
		printf("\n");
		}
	}
//This is no fill.
	if(i==0){
		for(k=0;k<size;k++){
			for(j=0;j<k+1;j++){
				if(j==0||k==j||k==size-1){
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
void zigzag(){
	int size,nzig,i,j,k,l,m;
	printf("You have chosen zigzag.\nPlease enter the size:\nEnter the number of zigs:\n");
	scanf("%d%d",&size,&nzig);
//print zigs
	for(i=0;i<nzig;i++){
//diagonal moving right
		for(j=0;j<size;j++){
			for(k=0;k<j;k++){
				printf(" ");
			}
			printf("*\n");
		}
//diagonal moving left
		for(l=0;l<size;l++){
			for(m=0;m<(size-l-1);m++){
				printf(" ");
			}
			printf("*\n");
		}
	}
}
main(){
//use a do while loop to solve the problem.
	while(1){
		int choice=0;
		printf("This is lab 6 print shapes.\nPlease enter\n1 square.\n2 triangle.\n3 zigzag.\n0 exit.\n");
		scanf("%d",&choice);
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
		if(choice==0){
			printf("You have chosen to exit.\n");
			break;
		}	
	}
return 0;
}
