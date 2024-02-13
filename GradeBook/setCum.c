/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void setCum(Node* person){
  //sets each of the cat cumulatives equal to the cumulative calc
	person->Student.Cat1.Cumulative  =  calc(person->Student.Cat1.score1, person->Student.Cat1.score2, person->Student.Cat1.score3);

	person->Student.Cat2.Cumulative  =  calc(person->Student.Cat2.score1, person->Student.Cat2.score2, person->Student.Cat2.score3);

 	person->Student.Cat3.Cumulative  =  calc(person->Student.Cat3.score1, person->Student.Cat3.score2, person->Student.Cat3.score3);

	person->Student.Cat4.Cumulative  =  calc(person->Student.Cat4.score1, person->Student.Cat4.score2, person->Student.Cat4.score3);
	
}
