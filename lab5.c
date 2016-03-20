/*This is ece177 lab5.*/
#include<stdio.h>
===================
int main() {
	int h, m, s, i, j, k;
	h = 0;
	m = 0;
	s = 0;
	printf("please input the hour: the minute: the second: \n");
	scanf_s("%d%d%d",&h,&m,&s);
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
		/*hour and with 6 bit shifting 1 bit*/
		for (i = 32; i != 0; i>>= 1) {
			if (i&h) {
				printf("*");
			}
			else { printf("_"); 
			}
		}
		printf("\n");
	
	}
	return 0;
}
