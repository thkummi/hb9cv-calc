#include <stdio.h>

int main() {
	
      float f, lambda, l1, l2, l3, l4, l5, bdiam, raddiam;

      printf("Please input an f in MHz value: e.G. 432.2 ");
    	scanf("%f", &f);
    
    	printf("Calculating for %f MHz\n", f);
	
      lambda = ( 30000000/f)/100;	
      l1 = ( 0.92*lambda*5)/10;
      l2 = ( lambda*5)/10;
      l3 = ( lambda*1.25)/10;
      l4 = ( lambda*1.25)/20;
      l5 = ( lambda*1.35)/20;
      bdiam = lambda*0.0072;
      raddiam = lambda*0.0036;

      printf("Lambda is %f mm\n", lambda);
      printf("L1 Driven Element is %f mm\n", l1);
      printf("L2 Reflector is %f mm\n", l2);
      printf("L3 element spaceing is %f mm\n", l3);
      printf("L4 Matching on dr. element is %f mm\n", l4);
      printf("L5 Matching on reflector is %f mm\n", l5);
      printf("Boom Diam. is %f mm\n", bdiam);
      printf("Radiator Diam. is %f mm\n", raddiam);
	

	    printf("73! \n");
	
	return 0;
}
