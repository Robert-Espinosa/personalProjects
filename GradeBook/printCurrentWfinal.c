#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"



void printCurrentWfinal(float f1, float f2){
  //prints current and final but repalces final with n/a if -1	
        printf("\n%.2f\t", f1);
	if(f2 > 1){	
		printf("%.2f\t", f2);
	}else{
		printf("n/a");
	}





}
