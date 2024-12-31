
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>


float calc(float f1, float f2, float f3){
	float cumulative = 0;
	
	//if all dont equal -1 then add all
	if(f1 !=-1 && f2 != -1 && f3 != -1){
		cumulative = (f1+f2+f3)/3;
	}
	//if only the 3rd is -1 then take first 2
	else if(f1 != -1 && f2 != -1 && f3 ==-1){

		cumulative = (f1+f2)/2;
	}
	//if both 2 and 3 are -1 return first score
	else if(f1!=-1 && f2 ==-1 && f3 == -1){
		cumulative =f1;		
	}
	//else all are -1 so return
	else{
		cumulative = -1.0;
		
	}
	return cumulative;
}
