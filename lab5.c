/*This is ece177 lab5.*/
#include<stdio.h>
void c(){
	int i,j,k,h,m,s;
	printf("This is c level.\n");
	printf("please input the hour: the minute: the second: \n");
	scanf("%d%d%d",&h,&m,&s);
	for(i=0;i<=2;i++){
		if(i==0){
		j=h;	
		}
		if(i==1){
		j=m;
		}
		if(i==2){
		j=s;
		}
		if(j<=0||j>=60){
		printf("ERROR:%d\n",j);
		}
		else{
			for(k=0;k<j;k++){
				printf("*");
			}
		printf("\n");
		}
	} 
} 
void b(){
	int i,j,k,h,m,s;
	printf("This is b level.\n");
	printf("please input the hour: the minute: the second: \n");
	scanf("%d%d%d",&h,&m,&s);

}
void a(){
	printf("This is a level.\n");
	printf("please input the hour: the minute: the second: \n");
//	scanf("%d%d%d",&h,&m,&s);

}

int main() {
	c();
	b();
	a();
/*
	int h, m, s, i, j, k;
	h = 0;
	m = 0;
	s = 0;
	for (j = 0; j <= 2; j++) {
		if (j = 0) {
			k = h;
		}
		if (j = 1) {
			k = m;
		}
		if (j = 2) {
			k = s;
		}
		for{
		}
	}
	while ((h!= 0 )|| (m!= 0) || (s!= 0)) {
		for (i = 32; i != 0; i>>= 1) {
			if (i&h) {
				printf("*");
			}
			else { printf("_"); 
			}
		}
		printf("\n");
	
	}
*/
return 0;
}
