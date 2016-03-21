/*This is ece177 lab5.*/
#include<stdio.h>
void c() {
	int i, j, k, h, m, s;
	printf("This is c level.\n");
	printf("please input the hour: the minute: the second: \n");
	scanf("%d%d%d", &h, &m, &s);
	for (i = 0; i <= 2; i++) {
		if (i == 0) {
			j = h;
		}
		if (i == 1) {
			j = m;
		}
		if (i == 2) {
			j = s;
		}
		if (j < 0 || j >= 60) {
			printf("ERROR:%d\n", j);
		}
		else {
			for (k = 0; k<j; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
}
void b() {
	int i, j, k, h, m, s;
	printf("This is b level.\n");
	printf("please input the hour: the minute: the second: \n");
	scanf("%d%d%d", &h, &m, &s);
	for (i = 0; i <= 2; i++) {
		if (i == 0) {
			j = h;
		}
		if (i == 1) {
			j = m;
		}
		if (i == 2) {
			j = s;
		}
		if (j < 0 || j >= 60) {
			printf("ERROR:%d\n", j);
		}
		else {
			for (k=32;k!=0;k>>=1) {
				if(k&j){
					printf("*");
				}
				else{
					printf("_");
				}
			}
			printf("\n");
		}
	}

}
void a() {
	int i, j, k, h, m, s;
	printf("This is a level.\n");
	printf("please input the hour: the minute: the second: \n");
	scanf("%d%d%d",&h,&m,&s);
	for (i = 0; i <= 5; i++) {
		if (i == 0) {
			j = h/10;
		}
		if (i == 1) {
			j = h%10;
		}
		if (i == 2) {
			j = m/10;
		}
		if (i == 3) {
			j = m%10;
		}
		if (i == 4) {
			j = s/10;
		}
		if (i == 5) {
			j = s%10;
		}
		if (j < 0 || j >= 60) {
			printf("ERROR:%d\n", j);
		}
		else {
			for (k=8;k!=0;k>>=1) {
				if(k&j){
					printf("*");
				}
				else{
					printf("_");
				}
			}
			printf("\n");
		}
	}
}

int main() {
	c();
	b();
	a();
	return 0;
}
