#include <stdio.h>
#include <math.h>
/*Question 1 is translate temperature from Fahrenheit to Celsius.*/
int temperature(){
	double f,c;
	printf("Please input the Fahrenheit temperature:\n");
	scanf("%lf",&f);
	c=(f-32)*5/9;
	printf("The celsius temperature of the Fahrenheit %f is:%f\n",f,c);
}
/*Question 2 is to evaluate the polynomial f(x)=x^3+5x^2+10x+15.*/
int polynomial(){
	double x,y;
	printf("Please enter the x value:\n");
	scanf("%lf",&x);
	y=x*x*x+5*x*x+10*x+15;
	printf("The product of the polynomial is:%lf\n",y);
}
/*Question 3 is to calculate two solutions of the equation ax^2+bx+c=0*/
int solution(){
	int a,b,c;
	double x1,x2;
	printf("Please enter the a,b,c values by sequence:\n");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("The solution\nx1 is: %f\nx2 is: %f\n",x1,x2);
}
/*Question 4 is to compute the distance s fallen by an object in free fall. The formula is s=s0+v0*t+(1/2)*a*t^2, s0 is the initial position in feet, v0 is the initial downward velovity in ft/sec, t is the time in seconds, and a is 32.2ft/sec^2. The output values are s and t where t=0,5,10...100.*/
int freefalldistance(){
	int t[20],s[20],i,j;
	int s0,v0;
	double a;
	a=32.2;
	printf("Please input values of s0 and v0:\n");
	scanf("%d%d",&s0,&v0);
	for(i=0;i<20;i++){
		t[i]=(i+1)*5;
	}
	for(j=0;j<20;j++){
		s[j]=s0+v0*t[j]+(1/2)*a*t[j]*t[j];
		printf("Time:%d Freefalldistance:%d\n",t[j],s[j]);
	}	
}
int main(){
int question;
	printf("This is ece177 lab2 solving 4 questions.\nPlease enter\n1 for temperature,\n2 for polynomial,\n3 for solution,\n4 for freefalldistance.\n0 for exit.\n");
	scanf("%d",&question);
	while(question!=0){
		switch (question){
			case 1:
			temperature();
			break;
			case 2:
			polynomial();
			break;
			case 3:
			solution();
			break;
			case 4:
			freefalldistance();
			break;
			default:
			printf("Sorry, your choice did not match any of the four. Please try again.\n");
			break;
		}
	printf("This is ece177 lab2 solving 4 questions.\nPlease enter\n1 for temperature,\n2 for polynomial,\n3 for solution,\n4 for freefalldistance.\n0 for exit.\n");
	scanf("%d",&question);
	}
return 0;
}

