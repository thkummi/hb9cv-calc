/*
BSD 3-Clause License

Copyright (c) 2021, Thomas Kummer
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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
