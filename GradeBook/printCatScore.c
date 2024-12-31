#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"
#include <math.h>

void printCatScores(float f1, float f2, float f3){
  //checks to see if the float is negative and prints n/a and number if isnt
	if( f1 > 0 ){
		printf("%.2f\t" , f1);
	}else{
		printf("  ");
		printf("n/a\t");
	}

	if(f2 > 0){
		printf("%.2f\t" , f2);
	}else{
		printf("  ");
		printf("n/a\t");
	}
	
	if(f3 > 0){
		printf("%.2f\t", f3);
	}else{
		printf("  ");
		printf("n/a  ");
	}


}
