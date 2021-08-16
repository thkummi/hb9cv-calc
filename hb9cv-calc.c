/*
HB9CV Antanna Calculator
Copyright (C) 2021  Thomas Kummer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>

int main() {
	
	float f, lambda, l1, l2, l3, l4, l5, bdiam, raddiam;

	printf("Please input an f in MHz value: e.G. 432.2 \n");
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

	printf(" Lambda is %f mm\n", lambda);
	printf(" L1 Driven Element is %f mm\n", l1);
	printf(" L2 Reflector is %f mm\n", l2);
	printf(" L3 element spaceing is %f mm\n", l3);
	printf(" L4 Matching on dr. element is %f mm\n", l4);
	printf(" L5 Matching on reflector is %f mm\n", l5);
	printf(" Boom Diam. is %f mm\n", bdiam);
	printf(" Radiator Diam. is %f mm\n", raddiam);
	
	printf("\n");
	printf("  connect feed on this side \n");
	printf("  --------------------------L1 \n");
	printf("          L4|--\\| \n");
	printf("               || \n");	
	printf("              L3| \n");
	printf("                || \n");
	printf("                | \\--|L5 \n");
	printf(" ----------------------------L2 \n");
	printf("\n");
	printf("\n");
	printf(" ===============================================\n");
	printf("                        || \\     |\n");
	printf("                        || C1 ___\\______\n");
	printf("                        ||  \\––– /   ___|__\n");
	printf("                        ||   |      /'  |  '\\ \n");
	printf("                        ||---)------\\.__|__./\n");
	printf("                        ||   |      |  50   |\n");
	printf("                        ||   |      |  Ohm  |\n");
	printf("\n");
	printf(" C1 10m-Band 50pF 6m-Band 30pF 2m band 12pF \n");
	printf("\n");
	printf("\n");
	
	printf(" 73! \n");
	
	return 0;
}
