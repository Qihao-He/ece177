/*this is the main function of the lab2 of ece177*/
#include <stdio.h>
//#include <math.h>
int temperature(){
	double f;
	double c;
	printf("Please input the Fahrenheit temperature:\n");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("The celsius temperature of the Fahrenheit %f is:%f\n",f,c);
}
int polynomial(){
	double x;
	double y;
	printf("Please enter the x value:\n");
	scanf("%lf",&x);
	y=x*x*x+5*x*x+10*x+15;
	printf("The product of the polynomial is:%lf\n",y);
}

int main(){
int question;
	printf("This is ece177 lab2 solving 4 questions.\n");
	printf("Please enter\n1 for temperature,\n2 for polynomial,\n3 for solution,\n4 for freefall.\n");
	scanf("%d",&question);
	switch (question){
	case 1:
		temperature();
		break;
	case 2:
		polynomial();
		break;
	}
	return 0;
}

