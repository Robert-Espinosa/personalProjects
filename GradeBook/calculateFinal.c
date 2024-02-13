
/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */


#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

float calculateFinal(Node *person){
	float final = 0.0;
	//if our cumulative  is not -1 then mutiply by cat corresponding weight

	if(person->Student.Cat1.Cumulative != -1){
		final += (person->Student.Cat1.Cumulative * 0.15);	
	}
	if(person->Student.Cat2.Cumulative != -1){
		final += (person->Student.Cat2.Cumulative * 0.30);
	}
	if(person->Student.Cat3.Cumulative != -1){
		final += (person->Student.Cat3.Cumulative * 0.20);
	}
	if(person->Student.Cat4.Cumulative != -1){
		final += (person->Student.Cat4.Cumulative * 0.35);
	}	
	// return the final with mutiplied weight
	return final;
}


