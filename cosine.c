#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265

FILE *result;

int main () {
   	double x, ret, val;

   	result = fopen("string.txt","w");	/*Open write filestream*/
	if (result==NULL) {fputs ("Write file error",stderr); exit (1);}

	for(int i=1; i<40; i++){
		for(x=0; x<360; x++){
			fprintf(result, "%1.4lf ", cos(x * PI / 180.00000));
		} 
	}
	
	fclose(result); /*Close write filestream*/
   
   return(0);
}
