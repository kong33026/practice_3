#include<stdio.h>
#include"hcf_lcm.h"

int main(int argc, char *argv[])
{
	long x, y, hcf, lcm;
 
	printf("Enter two integers\n");
	scanf("%ld%ld", &x, &y);
 
		hcf = gcd(x, y);
		lcm = (x*y)/hcf;
  
	printf("Greatest common divisor of %ld and %ld = %ld\n", x, y, hcf);
	printf("Least common multiple of %ld and %ld = %ld\n", x, y, lcm);
	
	return 0;
}
