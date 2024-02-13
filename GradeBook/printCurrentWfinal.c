/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
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
