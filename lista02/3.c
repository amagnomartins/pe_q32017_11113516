#include <stdio.h>
#include <math.h>

main () {
	float a1, a=1, b=(1/sqrt(2)), t=1/4, p=1, c=0, pi;
	while (c<=10){
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t =t-p*(pow(a-a1, 2));
		p =2*p;
		a =a1;
		c+=1;
	}
	pi=pow(a+b,2)/(4*t);
	printf("%.20f\n", pi);
}
