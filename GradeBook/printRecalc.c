/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


void printRecalc(Node* person){
  //prints student name then all cumulative scores
  printf("%-30s\t", person->Student.student_name);
	
	 printf("Quizzes cumlative: %.2f\tMidterm Culative: %.2f   HomeWork Cumlative %.2f\tFinal Culative %.2f\n",  person->Student.Cat1.Cumulative, person->Student.Cat2.Cumulative, person->Student.Cat3.Cumulative, person->Student.Cat4.Cumulative);


}
