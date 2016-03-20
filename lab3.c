#include<stdio.h>
#include<math.h>
void one_printalltypesize(){
	printf("one_print all types size\n");
	printf("sizeof char = %zu\n", sizeof(char));
	printf("sizeof unsigned char = %zu\n", sizeof(unsigned char));
	printf("sizeof short = %zu\n", sizeof(short));
	printf("sizeof unsigned short = %zu\n", sizeof(unsigned short));
	printf("sizeof int = %zu\n", sizeof(int));
	printf("sizeof unsigned int = %zu\n", sizeof(unsigned int));
	printf("sizeof long = %zu\n", sizeof(long));
	printf("sizeof unsigned long = %zu\n", sizeof(unsigned long));
	printf("sizeof long long = %zu\n", sizeof(long long));
	printf("sizeof unsigned long long = %zu\n", sizeof(unsigned long long));
	printf("sizeof float = %zu\n", sizeof(float));
	printf("sizeof double = %zu\n", sizeof(double));
	printf("sizeof char* = %zu\n", sizeof(char*));
	printf("sizeof long* = %zu\n", sizeof(long*));
	}
void two_a(){
	printf("\ntwo_a\n");
	printf("%d\t%u\n", (short)45, (unsigned short)45);
	printf("%d\t%u\n", (short)150, (unsigned short)150);
	printf("%d\t%u\n", (short)-150, (unsigned short)-150);
	printf("%d\t%u\n", (short)300, (unsigned short)300);
	printf("%d\t%u\n", (short)-1, (unsigned short)-1);
	printf("%d\t%u\n", (short)65535, (unsigned short)65535);
}
void two_b() {
	int c;
	c= 45;
	printf("\ntwo_b\n");
	printf("%d\t%d\t%u\n", 45, (short)c, (unsigned short)c);
	printf("%d\t%d\t%u\n", 150, (short)c, (unsigned short)c);
	printf("%d\t%d\t%u\n", -150, (short)c, (unsigned short)c);
	printf("%d\t%d\t%u\n", 300, (short)c, (unsigned short)c);
	printf("%d\t%d\t%u\n", -1, (short)c, (unsigned short)c);
	printf("%d\t%d\t%u\n", 65535, (short)c, (unsigned short)c);
}
void two_c() {
	unsigned char uc;
	uc= 45;
	printf("\ntwo_c\n");
	printf("%d\t%d\t%u\n", 45, (short)uc, (unsigned short)uc);
	printf("%d\t%d\t%u\n", 150, (short)uc, (unsigned short)uc);
	printf("%d\t%d\t%u\n", -150, (short)uc, (unsigned short)uc);
	printf("%d\t%d\t%u\n", 300, (short)uc, (unsigned short)uc);
	printf("%d\t%d\t%u\n", -1, (short)uc, (unsigned short)uc);
}
void three(int year) {
	int month, day, a, b, c, d, e, f, g, h, i, k, l, m, n, p;
	printf("\nthree_please input the year between'2011-1015':\n");
	scanf("%d",&year);
	a = year % 19;
	b = year / 100;
	c = year % 100;
	d = b / 4;
	e = b % 4;
	f = (b + 8) / 25;
	g = (b - f + 1) / 3;
	h = (19 * a + b - d - g + 15) % 30;
	i = c / 4;
	k = c % 4;
	l = (32 + 2 * e + 2 * i - h - k) % 7;
	m = (a + 11 * h + 22 * l) / 451;
	n = (h + l - 7 * m + 114) / 31;
	p = (h + l - 7 * m + 114) % 31;
	month = n;
	day = p + 1;
	printf("Date of Easter in %d is %d/%d\n",year,month,day);
}

int   main(){
	int year = 0; 
	one_printalltypesize();
	two_a();
	two_b();
	two_c();

	do{
		three(year);
	} while (year != 0);

return 0;
}
